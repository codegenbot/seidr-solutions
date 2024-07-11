```
def minPath(n, k):
    m = [[int(input(f"Enter value at row {i} column {j}: ")) for j in range(1, n+1)] for i in range(1, n+1)]
    
    def dfs(i, j, path, visited, m, k):
        if len(path) == k:
            return sum(path)
        visited.add((i, j))
        min_path = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 1 <= ni <= n and 1 <= nj <= n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [m[ni][nj]], visited.copy(), m, k)
                if min_path is None or new_path < min_path:
                    min_path = new_path
        return min_path

    min_path = None
    for i in range(1, n+1):
        for j in range(1, n+1):
            path = dfs(i, j, [], set(), m, k)
            if min_path is None or path < min_path:
                min_path = path
    return min_path

n = int(input("Enter the size of the grid: "))
k = int(input("Enter the value of k: "))

print(minPath(n, k))