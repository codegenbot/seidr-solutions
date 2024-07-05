def minPath(grid, k):
    from heapq import heappop, heappush

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    min_path = [float("inf")] * k

    def dfs(x, y, path):
        if len(path) == k:
            nonlocal min_path
            if path < min_path:
                min_path = path[:]
            return

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                dfs(nx, ny, path + [grid[nx][ny]])

    for i in range(N):
        for j in range(N):
            dfs(i, j, [grid[i][j]])

    return min_path

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().split()
    
    k = int(data[0])
    grid = []
    
    data = data[1:]
    n = int(len(data) ** 0.5)
    for i in range(n):
        row = list(map(int, data[i*n:(i+1)*n]))
        grid.append(row)
    
    result = minPath(grid, k)
    print(result)