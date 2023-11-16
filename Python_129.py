
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

    # Complete the following code.
    # You can add more helper functions if needed.

    def get_neighbors(grid, x, y):
        """
        Given a grid, and the current position (x, y), returns a list of the
        neighbors of the current position.
        """
        res = []
        if x > 0:
            res.append((x - 1, y))
        if x < len(grid) - 1:
            res.append((x + 1, y))
        if y > 0:
            res.append((x, y - 1))
        if y < len(grid[0]) - 1:
            res.append((x, y + 1))
        return res

    def get_all_paths(grid, x, y, k):
        """
        Given a grid, and the current position (x, y), and the length of the
        path, returns a list of all possible paths of length k.
        """
        if k == 1:
            return [[grid[x][y]]]
        res = []
        for i, j in get_neighbors(grid, x, y):
            for path in get_all_paths(grid, i, j, k - 1):
                res.append([grid[x][y]] + path)
        return res

    def get_min_path(grid, k):
        """
        Given a grid, and the length of the path, returns a list of the values
        on the cells that the minimum path go through.
        """
        paths = []
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                paths.extend(get_all_paths(grid, i, j, k))
        return min(paths)

    return get_min_path(grid, k)
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
