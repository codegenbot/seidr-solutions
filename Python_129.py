def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    path = []
    visited = set()

    # Define a function to check if a cell is valid and not visited before
    def isValidCell(i, j):
        return 0 <= i < n and 0 <= j < m and (i, j) not in visited

    # Define a function to find the minimum path of length k
    def findMinPath(k):
        if k == 1:
            for i in range(n):
                for j in range(m):
                    if isValidCell(i, j) and grid[i][j] not in visited:
                        return [grid[i][j]]
        else:
            for i in range(n):
                for j in range(m):
                    if isValidCell(i, j) and grid[i][j] not in visited:
                        path.append(grid[i][j])
                        visited.add((i, j))
                        findMinPath(k - 1)
                        path.pop()
                        visited.remove((i, j))

    # Call the function to find the minimum path of length k
    findMinPath(k)

    return path