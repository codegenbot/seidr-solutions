```
def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    shortest_path = []

    def dfs(i, j, current_path, current_sum):
        nonlocal shortest_path
        if current_sum == k:
            if not shortest_path or sum(shortest_path) > current_sum:
                shortest_path = current_path[:]
            return

        if len(current_path) == k + 1:
            return

        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                dfs(ni, nj, current_path + [grid[ni][nj]], current_sum + grid[ni][nj])
                visited[ni][nj] = False

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                dfs(i, j, [grid[i][j]], grid[i][j])
                visited[i][j] = False

    return shortest_path