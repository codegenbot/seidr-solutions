grid = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
k = 3

def find_min_path(grid, k):
    min_path = float("inf")

    def dfs(i, j, path, visited):
        if len(path) >= k:
            nonlocal min_path
            if sum(path) < min_path:
                min_path = sum(path)
            return

        if (i, j) not in visited:
            path.append(grid[i][j])
            visited.add((i, j))

            neighbors = []
            if i > 0:
                neighbors.append((i - 1, j))
            if i < len(grid) - 1:
                neighbors.append((i + 1, j))
            if j > 0:
                neighbors.append((i, j - 1))
            if j < len(grid[0]) - 1:
                neighbors.append((i, j + 1))
            neighbors.sort(key=lambda x: abs(grid[x[0]][x[1]] - grid[i][j]))

            for neighbor in neighbors:
                ni, nj = neighbor
                dfs(ni, nj, path.copy(), visited.copy())

            path.pop()
            visited.remove((i, j))

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            dfs(i, j, [], set())

    return min_path

def check(result):
    print(result)

result = find_min_path(grid, k)
check(result)