
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


    # TODO: Complete the following code given the task description and function signature.
    # You may add additional functions if needed.

    # You may add additional classes if needed.
    class Cell:
        def __init__(self, value, row, col):
            self.value = value
            self.row = row
            self.col = col

    # You may add additional variables if needed.
    n = len(grid)
    cells = []

    # You may add additional functions if needed.
    def get_neighbors(cell):
        neighbors = []
        if cell.row > 0:
            neighbors.append(cells[cell.row - 1][cell.col])
        if cell.row < n - 1:
            neighbors.append(cells[cell.row + 1][cell.col])
        if cell.col > 0:
            neighbors.append(cells[cell.row][cell.col - 1])
        if cell.col < n - 1:
            neighbors.append(cells[cell.row][cell.col + 1])
        return neighbors

    # You may add additional functions if needed.
    def get_path(cell, path):
        if len(path) == k:
            return path
        neighbors = get_neighbors(cell)
        if not neighbors:
            return None
        for neighbor in neighbors:
            path.append(neighbor.value)
            result = get_path(neighbor, path)
            if result:
                return result
            path.pop()
        return None

    # You may add additional functions if needed.
    def get_min_path():
        min_path = None
        for row in cells:
            for cell in row:
                path = [cell.value]
                result = get_path(cell, path)
                if result:
                    if not min_path or result < min_path:
                        min_path = result
        return min_path

    # You may add additional functions if needed.
    for row in range(n):
        cells.append([])
        for col in range(n):
            cells[row].append(Cell(grid[row][col], row, col))

    return get_min_path()
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
