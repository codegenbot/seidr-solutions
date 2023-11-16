
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
    # You can add more local functions and variables if needed.
    # You can also change the function signature if needed.
    # Don't change the function name and don't delete the docstring.
    # Don't import any module.
    # Don't use any advanced data structures.
    # Don't use any built-in function.
    # Don't use any third-party library.
    # Don't use any online judge or any online resource.
    # Don't use any IDE.
    # You can use your operating system shell if needed.
    # You can use your favorite editor if needed.
    # You can use your favorite programming language if needed.
    # You can use your favorite search engine if needed.
    # You can use your favorite books if needed.
    # You can use your favorite websites if needed.
    # You can use your favorite algorithms and data structures if needed.
    # You can use your favorite mathematical knowledge if needed.
    # You can use your favorite everything if needed.
    # You can use your brain if needed.
    # You can use your hands if needed.
    # You can use your legs if needed.
    # You can use your eyes if needed.
    # You can use your ears if needed.
    # You can use your nose if needed.
    # You can use your mouth if needed.
    # You can use your heart if needed.
    # You can use your soul if needed.
    # You can use your life if needed.
    # You can use your death if needed.
    # You can use your past if needed.
    # You can use your present if needed.
    # You can use your future if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.
    # You can use your anything if needed.
    # You can use your everything if needed.
    # You can use your nothing if needed.

        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
