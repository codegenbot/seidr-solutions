def minPath(grid, k):
    """
    Given a grid with N rows and N columns (N >= 2) and a positive integer k,
    each cell of the grid contains a value. Every integer in the range [1, N * N]
    inclusive appears exactly once on the cells of the grid.

    You have to find the minimum path of length k in the grid. You can start
    from any cell, and in each step you can move to any of the neighbor cells,
    in other words, you can go to cells which share an edge with your current
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
    """

    # Variables to track current path and its length
    current_path = []
    current_length = 0

    # Function to find the minimum path
    def find_minimum_path(row, col, current_path, current_length):
        # Base case: If the current path length equals k, return the current path
        if current_length == k:
            return current_path
        # Base case: If the current row or column is out of bounds, return None
        if row < 0 or col < 0 or row >= len(grid) or col >= len(grid[0]):
            return None

        # Save the current value in this cell
        current_value = grid[row][col]

        # Add the current value to the current path
        current_path.append(current_value)
        current_length += 1

        # Try moving to each neighbor cell and find the minimum path
        paths = []
        paths.append(find_minimum_path(row - 1, col, current_path.copy(), current_length))
        paths.append(find_minimum_path(row + 1, col, current_path.copy(), current_length))
        paths.append(find_minimum_path(row, col - 1, current_path.copy(), current_length))
        paths.append(find_minimum_path(row, col + 1, current_path.copy(), current_length))

        # Filter out None paths
        paths = [path for path in paths if path is not None]

        # Sort the paths based on lexicographical order
        paths.sort()

        # Return the minimum path
        if paths:
            return paths[0]
        else:
            return None

    # Find the minimum path starting from each cell
    paths = []
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = find_minimum_path(i, j, [], 0)
            if path is not None:
                paths.append(path)

    # Sort the paths based on lexicographical order
    paths.sort()

    # Return the minimum path
    return paths[0]