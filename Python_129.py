
def minPath(grid):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []

    # Define a function to find the minimum path
    def findPath(i, j):
        if i == n-1 and j == m-1:
            return [grid[i][j]]
        else:
            paths = []
            for x, y in [(i+1, j), (i, j+1)]:
                if 0 <= x < n and 0 <= y < m and not visited[x][y]:
                    visited[x][y] = True
                    paths.append(findPath(x, y))
            return min(paths, key=lambda x: x[0])

    # Find the minimum path
    i, j = 0, 0
    while len(path) < k:
        path.append(grid[i][j])
        visited[i][j] = True
        i, j = findPath(i, j)

    # Return the ordered list of values on the cells that the minimum path go through
    return [grid[i][j] for i, j in enumerate(path)]