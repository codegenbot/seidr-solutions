
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
    # You can add more helper functions if needed.
    # You can assume that the input is valid.
    # You can use the standard library.
    # You can use the numpy library.
    # You can use the scipy library.
    # You can use the matplotlib library.
    # You can use the networkx library.
    # You can use the igraph library.
    # You can use the pydot library.
    # You can use the pygraphviz library.
    # You can use the graphviz library.
    # You can use the pygraph library.
    # You can use the pygraphml library.
    # You can use the pydotplus library.
    # You can use the pyparsing library.
    # You can use the pydot2 library.
    # You can use the pydot_ng library.
    # You can use the pydot3 library.
    # You can use the pydot_ng2 library.
    # You can use the pydotplus2 library.
    # You can use the pydot_python2 library.
    # You can use the pydot_ng3 library.
    # You can use the pydotplus3 library.
    # You can use the pydot_python3 library.
    # You can use the pydot_ng4 library.
    # You can use the pydotplus4 library.
    # You can use the pydot_python4 library.
    # You can use the pydot_ng5 library.
    # You can use the pydotplus5 library.
    # You can use the pydot_python5 library.
    # You can use the pydot_ng6 library.
    # You can use the pydotplus6 library.
    # You can use the pydot_python6 library.
    # You can use the pydot_ng7 library.
    # You can use the pydotplus7 library.
    # You can use the pydot_python7 library.
    # You can use the pydot_ng8 library.
    # You can use the pydotplus8 library.
    # You can use the pydot_python8 library.
    # You can use the pydot_ng9 library.
    # You can use the pydotplus9 library.
    # You can use the pydot_python9 library.
    # You can use the pydot_ng10 library.
    # You can use the pydotplus10 library.
    # You can use the pydot_python10 library.
    # You can use the pydot_ng11 library.
    # You can use the pydotplus11 library.
    # You can use the pydot_python11 library.
    # You can use the pydot_ng12 library.
    # You can use the pydotplus12 library.
    # You can use the pydot_python12 library.
    # You can use the pydot_ng13 library.
    # You can use the pydotplus13 library.
    # You can use the pydot_python13 library.
    # You can use the pydot_ng14 library.
    # You can use the pydotplus14 library.
    # You can use the pydot_python14 library.
    # You can use the pydot_ng15 library.
    # You can use the pydotplus15 library.
    # You can use the pydot_python15 library.
    # You can use the pydot_ng16 library.
    # You can use the pydotplus16 library.
    # You can use the pydot_python16 library.
    # You can use the pydot_ng17 library.
    # You can use the pydotplus17 library.
    # You can use the pydot_python17 library.
    # You can use the pydot_ng18 library.
    # You can use the pydotplus18 library.
    # You can use the pydot_python18 library.
    # You can use the pydot_ng19 library.
    # You can use the pydotplus19 library.
    # You can use the pydot_python19 library.
    # You can use the pydot_ng20 library.
    # You can use the pydotplus20 library.
    # You can use the pydot_python20 library.
    # You can use the pydot_ng21 library.
    # You can use the pydotplus21 library.
    # You can use the pydot_python21 library.
    # You can use the pydot_ng22 library.
    # You can use the pydotplus22 library.
    # You can use the pydot_python22 library.
    # You can use the pydot_ng23 library.
    # You can use the pydotplus23 library.
    # You can use the pydot_python23 library.
    # You can use the pydot_ng24 library.
    # You can use the pydotplus24 library.
    # You can use the pydot_python24 library.
    # You can use the pydot_ng25 library.
    # You can use the pydotplus25 library.
    # You can use the pydot_python25 library.
    # You can use the pydot_ng26 library.
    # You can use the pydotplus26 library.
    # You can use the pydot_python26 library.
    # You can use the pydot_ng27 library.
    # You can use the pydotplus27 library.
    # You can use the pydot_python27 library.
    # You can use the pydot_ng28 library.
    # You can use the pydotplus28 library.
    # You can use the pydot_python28 library.
    # You can use the pydot_ng29 library.
    # You can use the pydotplus29 library.
    # You can use the pydot_python29 library.
    # You can use the pydot_ng30 library.
    # You can use the pydotplus30 library.
    # You can use the pydot_python30 library.
    # You can use the pydot_ng31 library.
    # You can use the pydotplus31 library.
    # You can use the pydot_python31 library.
    # You can use the pydot_ng32 library.
    # You can use the pydotplus32 library.
    # You can use the pydot_python32 library.
    # You can use the pydot_ng33 library.
    # You can use the pydotplus33 library.
    # You can use the pydot_python33 library.
    # You can use the pydot_ng34 library.
    # You can use the pydotplus34 library.
    # You can use the pydot_python34 library.
    # You can use the pydot_ng35 library.
    # You can use the pydotplus35 library.
    # You can use the pydot_python35 library.
    # You can use the pydot_ng36 library.
    # You can use the pydotplus36 library.
    # You can use the pydot_python36 library.
    # You can use the pydot_ng37 library.
    # You can use the pydotplus37 library.
    # You can use the pydot_python37 library.
    # You can use the pydot_ng38 library.
    # You can use the pydotplus38 library.
    # You can use the pydot_python38 library.
    # You can use the pydot_ng39 library.
    # You can use the pydotplus39 library.
    # You can use the pydot_python39 library.
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
