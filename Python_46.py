

def fib4(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4(5)
    4
    >>> fib4(6)
    8
    >>> fib4(7)
    14


def minimum_points_to_reach_destination(matrix: list[list[int]]):
    """A robot starts at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
    The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right
    corner of the grid (marked 'Finish' in the diagram below).

    Now consider if some obstacles are added to the grids. How many unique paths would there be?

    An obstacle and empty space is marked as 1 and 0 respectively in the grid.
    Note: m and n will be at most 100.

    Example 1:
    Input:
    [
    [0,0,0],
    [0,1,0],
    [0,0,0]
    ]
    Output: 2
    Explanation:
    There is one obstacle in the middle of the 3x3 grid above.
    There are two ways to reach the bottom-right corner:
    1. Right -> Right -> Down -> Down
    2. Down -> Down -> Right -> Right

    >>> matrix = [
    ... [0,0,0],
    ... [0,1,0],
    ... [0,0,0]
    ... ]
    >>> minimum_points_to_reach_destination(matrix)
    2
    """
    """
