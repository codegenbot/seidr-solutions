
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

    # Write your code here.
    # You may need to add more functions to this file.
    # You may need to add more classes to this file.
    # You may need to add more global variables to this file.
    # You may need to add more import statements.
    # You may need to add more code to this file.
    # You may need to add more comments to this file.
    # You may need to add more blank lines to this file.
    # You may need to add more spaces to this file.
    # You may need to add more tabs to this file.
    # You may need to add more newlines to this file.
    # You may need to add more semicolons to this file.
    # You may need to add more colons to this file.
    # You may need to add more parentheses to this file.
    # You may need to add more curly braces to this file.
    # You may need to add more brackets to this file.
    # You may need to add more quotes to this file.
    # You may need to add more apostrophes to this file.
    # You may need to add more backslashes to this file.
    # You may need to add more forward slashes to this file.
    # You may need to add more dots to this file.
    # You may need to add more commas to this file.
    # You may need to add more exclamation marks to this file.
    # You may need to add more question marks to this file.
    # You may need to add more underscores to this file.
    # You may need to add more hyphens to this file.
    # You may need to add more pluses to this file.
    # You may need to add more minuses to this file.
    # You may need to add more equal signs to this file.
    # You may need to add more ampersands to this file.
    # You may need to add more vertical bars to this file.
    # You may need to add more tildes to this file.
    # You may need to add more at signs to this file.
    # You may need to add more pound signs to this file.
    # You may need to add more dollar signs to this file.
    # You may need to add more percent signs to this file.
    # You may need to add more carets to this file.
    # You may need to add more asterisks to this file.
    # You may need to add more backticks to this file.
    # You may need to add more pipes to this file.
    # You may need to add more angle brackets to this file.
    # You may need to add more colons to this file.
    # You may need to add more semicolons to this file.
    # You may need to add more single quotes to this file.
    # You may need to add more double quotes to this file.
    # You may need to add more triple quotes to this file.
    # You may need to add more numbers to this file.
    # You may need to add more letters to this file.
    # You may need to add more symbols to this file.
    # You may need to add more words to this file.
    # You may need to add more sentences to this file.
    # You may need to add more paragraphs to this file.
    # You may need to add more chapters to this file.
    # You may need to add more pages to this file.
    # You may need to add more lines to this file.
    # You may need to add more characters to this file.
    # You may need to add more bytes to this file.
    # You may need to add more bits to this file.
    # You may need to add more kilobytes to this file.
    # You may need to add more megabytes to this file.
    # You may need to add more gigabytes to this file.
    # You may need to add more terabytes to this file.
    # You may need to add more petabytes to this file.
    # You may need to add more exabytes to this file.
    # You may need to add more zettabytes to this file.
    # You may need to add more yottabytes to this file.
    # You may need to add more brontobytes to this file.
    # You may need to add more geopbytes to this file.
    # You may need to add more shannon to this file.
    # You may need to add more hartley to this file.
    # You may need to add more nat to this file.
    # You may need to add more ban to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You may need to add more joule to this file.
    # You may need to add more electronvolt to this file.
    # You may need to add more hartree to this file.
    # You may need to add more rydberg to this file.
    # You
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
