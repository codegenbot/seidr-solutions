

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


def get_disjoint_sets(items: dict):
    """Given a dictionary of sets, return a dictionary of disjoint sets.
    A set of sets is disjoint if there are no duplicate items between any of the sets.
    Please write a function to efficiently compute the disjoint sets.
    >>> get_disjoint_sets({'A': {1, 2, 3, 4}, 'B': {5, 6}, 'C': {2}, 'D': {2, 7, 3, 1}, 'E': {4, 5}})
    {'A': {1, 2, 3, 4}, 'B': {5, 6}, 'C': {2}, 'D': {2, 7, 3, 1}, 'E': {4, 5}}
    >>> get_disjoint_sets({'A': {1, 2, 3, 4}, 'B': {5, 6}, 'C': {2}, 'D': {2, 7, 3, 1}, 'E': {4, 5, 1}})
    {'A': {1, 2, 3, 4}, 'B': {5, 6}, 'C': {2}, 'D': {2, 7, 3, 1}, 'E': {4, 5, 1}}
    >>> get_disjoint_sets({'A': {1, 2, 3, 4}, 'B': {5, 6}, 'C': {2}, 'D': {2, 7, 3, 1}, 'E': {4, 5, 1, 11, 12, 14}})
    {'A': {1, 2, 3, 4}, 'B': {5, 6}, 'C': {2}, 'D': {2, 7, 3, 1}, 'E': {4, 5, 1, 11, 12, 14}}
    """


def make_change(amount: int, coins: list, known_results: dict):
    """Given a list of coins and an amount, please write a method that returns the minimum number of coins
    needed to make the change for that amount.
    The function signature is as follows:
    make_change(amount, coins, known_results)
    The variable known_results is a dictionary that has keys that represent the amount and a value that
    represents the minimum number of coins needed to make the change for that amount.
    >>> make_change(100, [1, 5, 10, 25], known_results={})
    4
    >>> make_change(100, [1, 5, 10, 25], known_results={})
    4
    >>> make_change(100, [1, 5, 10, 25], known_results={})
    4
    """
    """
