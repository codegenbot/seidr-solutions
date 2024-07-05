def minPath(grid, k):
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

# Reading input
N = int(input())
grid = [list(map(int, input().split())) for _ in range(N)]
k = int(input())

# Calling the function and printing the result
result = minPath(grid, k)
print(" ".join(map(str, result)))