```
def minPath():
    while True:
        try:
            n = int(input("Enter the size of the grid: "))
            if n < 1:
                print("Grid size should be at least 1. Please enter again.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    while True:
        try:
            k = int(input("Enter the value of k: "))
            if k < 1:
                print("k should be at least 1. Please enter again.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    m = [[int(input(f"Enter value at row {i}, column {j}: ")) for j in range(1, n + 1)] for i in range(1, n + 1)]

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
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            path = dfs(i, j, [m[i][j]], set([(i, j)]), m, k)
            if min_path is None or path < min_path:
                min_path = path
    return min_path

print(minPath())