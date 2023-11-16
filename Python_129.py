
def minPath(grid, k):
    """
    Given a grid with N rows and N columns (N >= 2) and a positive integer k, 
    each cell of the grid contains a value. Every integer in the range [1, N * N]
    inclusive appears exactly once on the cells of the grid.

    You have to find the minimum path of length k in the grid. You can start
    from any cell, and in each step you can move to any of the neighbor cells,
    in other words, you can go to cells which share an edge with you current
    cell.
    Please note that a path of length k means visiting exactly k cells (not
    necessarily distinct).
    You CANNOT go off the grid.
    A path A (of length k) is considered less than a path B (of length k) if
    after making the ordered lists of the values on the cells that A and B go
    through (let's call them lst_A and lst_B), lst_A is lexicographically less
    than lst_B, in other words, there exist an integer index i (1 <= i <= k)
    such that lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have
    lst_A[j] = lst_B[j].
    It is guaranteed that the answer is unique.
    Return an ordered list of the values on the cells that the minimum path go through.

    Examples:


    def findNeighbors(grid, current, k):
        """
            Returns a list of the neighbors of the current cell and the
            direction of the current cell with respect to the neighbor.
        """
        neighbors = []
        x, y = current
        if x + 1 < len(grid):
            neighbors.append(((x + 1, y), "down"))
        if x - 1 >= 0:
            neighbors.append(((x - 1, y), "up"))
        if y + 1 < len(grid[0]):
            neighbors.append(((x, y + 1), "right"))
        if y - 1 >= 0:
            neighbors.append(((x, y - 1), "left"))
        return neighbors

    def dfs(grid, k, current, path, minPath):
        """
            Returns the minimum path found at a given iteration.
        """
        if k == 0:
            return path

        x, y = current

        for neighbor, direction in findNeighbors(grid, current, k):
            path.append(direction)
            path = dfs(grid, k - 1, neighbor, path, minPath)
            path.pop()

        return path

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = dfs(grid, k, (i, j), [], [])
            if len(minPath) == 0:
                minPath = path
            elif path < minPath:
                minPath = path

    return minPath

def minPath(grid, k):
    """
    Given a grid with N rows and N columns (N >= 2) and a positive integer k, 
    each cell of the grid contains a value. Every integer in the range [1, N * N]
    inclusive appears exactly once on the cells of the grid.

    You have to find the minimum path of length k in the grid. You can start
    from any cell, and in each step you can move to any of the neighbor cells,
    in other words, you can go to cells which share an edge with you current
    cell.
    Please note that a path of length k means visiting exactly k cells (not
    necessarily distinct).
    You CANNOT go off the grid.
    A path A (of length k) is considered less than a path B (of length k) if
    after making the ordered lists of the values on the cells that A and B go
    through (let's call them lst_A and lst_B), lst_A is lexicographically less
    than lst_B, in other words, there exist an integer index i (1 <= i <= k)
    such that lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have
    lst_A[j] = lst_B[j].
    It is guaranteed that the answer is unique.
    Return an ordered list of the values on the cells that the minimum path go through.

    Examples:

        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """

    def findNeighbors(grid, current, k):
        """
            Returns a list of the neighbors of the current cell and the
            direction of the current cell with respect to the neighbor.
        """
        neighbors = []
        x, y = current
        if x + 1 < len(grid):
            neighbors.append(((x + 1, y), "down"))
        if x - 1 >= 0:
            neighbors.append(((x - 1, y), "up"))
        if y + 1 < len(grid[0]):
            neighbors.append(((x, y + 1), "right"))
        if y - 1 >= 0:
            neighbors.append(((x, y - 1), "left"))
        return neighbors

    def dfs(grid, k, current, path, minPath):
        """
            Returns the minimum path found at a given iteration.
        """
        if k == 0:
            return path

        x, y = current

        for neighbor, direction in findNeighbors(grid, current, k):
            path.append(direction)
            path = dfs(grid, k - 1, neighbor, path, minPath)
            path.pop()

        return path

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = dfs(grid, k, (i, j), [], [])
            if len(minPath) == 0:
                minPath = path
            elif path < minPath:
                minPath = path

    return minPath
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
