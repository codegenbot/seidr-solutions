def minPath(grid, k):
    n = len(grid)

    def dfs(i, j, visited, cur_path, cur_sum):
        if len(visited) == k:
            return cur_path

        visited.add((i, j))
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        neighbors = [
            (x, y)
            for x, y in neighbors
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited
        ]
        neighbors.sort(key=lambda x: (grid[x[0]][x[1]], x))

        min_path = None
        for x, y in neighbors:
            res = dfs(x, y, visited.copy(), cur_path + [grid[i][j]], cur_sum + grid[i][j])
            if res:
                if min_path is None or sum(res) < sum(min_path):
                    min_path = res
        return min_path
    
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, set(), [], 0)
            if path:
                return path