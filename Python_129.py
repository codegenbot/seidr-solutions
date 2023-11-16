
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
    # You may add additional helper functions as needed.
    # You may not change the function signature.

    # The following is an example of a possible solution.
    # You may change the code below as you see fit.

    def get_neighbors(grid, row, column):
        """
        Returns a list of the neighbors of the cell at (row, column).
        """
        neighbors = []
        if row - 1 >= 0:
            neighbors.append((row - 1, column))
        if row + 1 < len(grid):
            neighbors.append((row + 1, column))
        if column - 1 >= 0:
            neighbors.append((row, column - 1))
        if column + 1 < len(grid):
            neighbors.append((row, column + 1))
        return neighbors

    def get_all_paths(grid, k):
        """
        Returns a list of all paths of length k in the grid.
        """
        paths = []
        for row in range(len(grid)):
            for column in range(len(grid)):
                paths.extend(get_paths(grid, row, column, k, []))
        return paths

    def get_paths(grid, row, column, k, path):
        """
        Returns a list of all paths of length k starting at (row, column).
        """
        if k == 0:
            return [path]
        paths = []
        for neighbor in get_neighbors(grid, row, column):
            paths.extend(get_paths(grid, neighbor[0], neighbor[1], k - 1, path + [grid[neighbor[0]][neighbor[1]]]))
        return paths

    def less_than(path_a, path_b):
        """
        Returns True if path_a is less than path_b.
        """
        for i in range(len(path_a)):
            if path_a[i] < path_b[i]:
                return True
            elif path_a[i] > path_b[i]:
                return False
        return False

    def get_min_path(paths):
        """
        Returns the minimum path.
        """
        min_path = paths[0]
        for path in paths:
            if less_than(path, min_path):
                min_path = path
        return min_path

    return get_min_path(get_all_paths(grid, k))
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
