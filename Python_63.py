

def fibfib(n: int):
    """The FibFib number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fibfib(0) == 0
    fibfib(1) == 0
    fibfib(2) == 1
    fibfib(n) == fibfib(n-1) + fibfib(n-2) + fibfib(n-3).
    Please write a function to efficiently compute the n-th element of the fibfib number sequence.
    >>> fibfib(1)
    0
    >>> fibfib(5)
    4
    >>> fibfib(8)
    24


def find_min_cost(costs: list, start: int, end: int):
    """Given a list of costs of length n and a start and end index,
    please write a function to return the minimum cost to get from start to end.
    You can start at any index and you can end at any index.
    You can only travel forward, from left to right.
    You cannot travel backwards.
    >>> find_min_cost([100, 1, 100, 1, 1], 0, 4)
    3
    >>> find_min_cost([5, 10, 3, 12, 5, 50, 6], 0, 6)
    14
    >>> find_min_cost([5, 10, 3, 12, 5, 50, 6], 1, 5)
    15
    >>> find_min_cost([5, 10, 3, 12, 5, 50, 6], 5, 6)
    6
    >>> find_min_cost([5, 10, 3, 12, 5, 50, 6], 3, 5)
    17
    >>> find_min_cost([5, 10, 3, 12, 5, 50, 6], 3, 4)
    12
    """


def find_min_cost_2(costs: list, start: int, end: int):
    """Given a list of costs of length n and a start and end index,
    please write a function to return the minimum cost to get from start to end.
    You can start at any index and you can end at any index.
    You can travel forward and backwards.
    >>> find_min_cost_2([100, 1, 100, 1, 1], 0, 4)
    2
    >>> find_min_cost_2([5, 10, 3, 12, 5, 50, 6], 0, 6)
    11
    >>> find_min_cost_2([5, 10, 3, 12, 5, 50, 6], 1, 5)
    10
    >>> find_min_cost_2([5, 10, 3, 12, 5, 50, 6], 5, 6)
    6
    >>> find_min_cost_2([5, 10, 3, 12, 5, 50, 6], 3, 5)
    12
    >>> find_min_cost_2([5, 10, 3, 12, 5, 50, 6], 3, 4)
    12
    """
    """
