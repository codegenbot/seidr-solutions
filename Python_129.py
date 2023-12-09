
def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []

    # Define a function to find the minimum path
    def findPath(i, j, k):
        if k == 1:
            return [grid[i][j]]
        else:
            paths = []
            for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
                if 0 <= x < n and 0 <= y < m and not visited[x][y]:
                    visited[x][y] = True
                    paths.append(findPath(x, y, k-1))
            return min(paths, key=lambda x: x[0]) if paths else []

    # Find the minimum path
    i, j = 0, 0
    while len(path) < k:
        path.append(grid[i][j])
        visited[i][j] = True
        i, j = findPath(i, j, k-len(path)) if paths else []

    # Return the ordered list of values on the cells that the minimum path go through
    return [grid[i][j] for i, j in enumerate(path)]