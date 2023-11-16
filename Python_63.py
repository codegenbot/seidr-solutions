

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


def find_max_length_of_matching_parentheses(string: str):
    """Given a string of round, curly, and square open and closing brackets, return the length of the longest
    substring that contains matching pairs of brackets.
    >>> find_max_length_of_matching_parentheses("()()")
    4
    >>> find_max_length_of_matching_parentheses("(())")
    4
    >>> find_max_length_of_matching_parentheses("((()()")
    4
    >>> find_max_length_of_matching_parentheses("()(()))))")
    4
    """
    """
