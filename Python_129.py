```
def minPath(grid, k):
    N = len(grid)

    def dfs(i, j, path):
        if len(path) == k:
            return sum(path), path
        if i < 0 or i >= N or j < 0 or j >= N:
            return float("inf"), None
        res = float("inf"), None
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N:
                current_sum, current_path = dfs(ni, nj, path + [grid[ni][nj]])
                if len(current_path) == k and current_sum < res[0]:
                    res = (current_sum, current_path)
        return res

    result = float("inf"); best_path = None; 
    for i in range(N): for j in range(N):
        current_sum, current_path = dfs(i, j, [grid[i][j]]);
        if len(current_path) == k and current_sum < result:
            result = current_sum;
            best_path = current_path;
    return best_path