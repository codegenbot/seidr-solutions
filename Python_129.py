def minPath(k):
    grid = '''
0 1 2 3
1 4 5 6
2 7 8 9
3 10 11 12
4 13 14 15
5 16 17 18
6 19 20 21
7 22 23 24
8 25 26 27
9 28 29 30
    '''
    n = len(grid.split('\n')[1:])
    m = [list(map(int, row.split())) for row in grid.split('\n')[1:]]
    
    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        visited.add((i, j))
        min_path = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [m[ni][nj]], visited.copy())
                if min_path is None or new_path < min_path:
                    min_path = new_path
        return min_path
    
    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [], set())
            if min_path is None or path < min_path:
                min_path = path
    return min_path