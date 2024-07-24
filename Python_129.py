```
grid = [[1], [5]]
n, m = len(grid), len(grid[0])

def dfs(i, j, path, visited=None, curr_sum=0):
    global grid
    if i == n - 1 and j == m - 1:
        return path
    min_path = None
    for x, y in [(0, 1), (1, 0)]:
        ni, nj = i + x, j + y
        if 0 <= ni < n and 0 <= nj < m and (ni, nj) not in visited or not visited:
            new_sum = curr_sum + grid[ni][nj]
            new_path = dfs(ni, nj, path + [grid[ni][nj]], set((ni, nj)), new_sum)
            if min_path is None or sum(new_path) < sum(min_path):
                min_path = new_path
    return min_path

def main():
    global grid, n, m
    grid = [[1], [5]]
    n, m = len(grid), len(grid[0])
    print(dfs(0, 0, [], set(), grid[0][0]))

if __name__ == "__main__":
    main()