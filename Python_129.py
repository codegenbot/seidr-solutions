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
    # You can add helper functions as needed.
    # You are NOT allowed to use the library function sort().
    # You are NOT allowed to use the library function min().
    # You are NOT allowed to use the library function max().

    def is_valid(r, c):
        """
        Check whether a cell is valid.

        :param r: the row index of the cell
        :param c: the column index of the cell
        :return: True if the cell is valid; False otherwise
        """
        return r >= 0 and r < len(grid) and c >= 0 and c < len(grid[r])

    def is_smaller(a, b):
        """
        Check whether a < b.

        :param a: a list of integers
        :param b: a list of integers
        :return: True if a < b; False otherwise
        """
        for i in range(len(a)):
            if a[i] < b[i]:
                return True
            elif a[i] > b[i]:
                return False
        return False

    def dfs(r, c, k, path):
        """
        Find the minimum path of length k in the grid.

        :param r: the row index of the current cell
        :param c: the column index of the current cell
        :param k: the number of steps remaining
        :param path: the current path
        :return: the minimum path
        """
        if k == 0:
            return path
        if k < 0:
            return None

        min_path = [float('inf')] * k
        for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nr, nc = r + dr, c + dc
            if not is_valid(nr, nc):
                continue
            path.append(grid[nr][nc])
            next_path = dfs(nr, nc, k-1, path)
            if next_path is not None and is_smaller(next_path, min_path):
                min_path = next_path
            path.pop()

        return min_path

    min_path = [float('inf')] * k
    for r in range(len(grid)):
        for c in range(len(grid[r])):
            path = [grid[r][c]]
            next_path = dfs(r, c, k-1, path)
            if next_path is not None and is_smaller(next_path, min_path):
                min_path = next_path

    return min_path
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
