
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

    # Complete the following code given the task description and function signature.
    # You can add more helper functions if needed.
    # You can also change the function signature if needed.
    # You can also change the function name if needed.
    # You can also add more import statements if needed.
    # You can also add more global variables if needed.
    # You can also change the default value of the global variables if needed.
    # You can also change the type of the global variables if needed.
    # You can also change the default value of the parameters if needed.
    # You can also change the type of the parameters if needed.
    # You can also change the return type if needed.
    # You can also change the return value if needed.
    # You can also change the return statement if needed.
    # You can also add more return statements if needed.
    # You can also add more print statements if needed.
    # You can also add more comments if needed.
    # You can also remove the comments if needed.
    # You can also change the comments if needed.
    # You can also add more blank lines if needed.
    # You can also remove the blank lines if needed.
    # You can also change the blank lines if needed.
    # You can also add more code if needed.
    # You can also remove the code if needed.
    # You can also change the code if needed.
    # You can also add more variables if needed.
    # You can also remove the variables if needed.
    # You can also change the variables if needed.
    # You can also add more parameters if needed.
    # You can also remove the parameters if needed.
    # You can also change the parameters if needed.
    # You can also add more functions if needed.
    # You can also remove the functions if needed.
    # You can also change the functions if needed.
    # You can also add more classes if needed.
    # You can also remove the classes if needed.
    # You can also change the classes if needed.
    # You can also add more modules if needed.
    # You can also remove the modules if needed.
    # You can also change the modules if needed.
    # You can also add more files if needed.
    # You can also remove the files if needed.
    # You can also change the files if needed.
    # You can also add more folders if needed.
    # You can also remove the folders if needed.
    # You can also change the folders if needed.
    # You can also add more projects if needed.
    # You can also remove the projects if needed.
    # You can also change the projects if needed.
    # You can also add more workspaces if needed.
    # You can also remove the workspaces if needed.
    # You can also change the workspaces if needed.
    # You can also add more computers if needed.
    # You can also remove the computers if needed.
    # You can also change the computers if needed.
    # You can also add more devices if needed.
    # You can also remove the devices if needed.
    # You can also change the devices if needed.
    # You can also add more operating systems if needed.
    # You can also remove the operating systems if needed.
    # You can also change the operating systems if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming environments if needed.
    # You can also remove the programming environments if needed.
    # You can also change the programming environments if needed.
    # You can also add more programming tools if needed.
    # You can also remove the programming tools if needed.
    # You can also change the programming tools if needed.
    # You can also add more programming libraries if needed.
    # You can also remove the programming libraries if needed.
    # You can also change the programming libraries if needed.
    # You can also add more programming frameworks if needed.
    # You can also remove the programming frameworks if needed.
    # You can also change the programming frameworks if needed.
    # You can also add more programming platforms if needed.
    # You can also remove the programming platforms if needed.
    # You can also change the programming platforms if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can also add more programming languages if needed.
    # You can also remove the programming languages if needed.
    # You can also change the programming languages if needed.
    # You can
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
