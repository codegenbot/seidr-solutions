from typing import List



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
    pass


def is_palindrome(s: str) -> bool:
    """Write a function to determine whether or not a given string s is a palindrome.
    >>> is_palindrome("racecar")
    True
    >>> is_palindrome("hello")
    False
    """
    pass


def find_longest_substring(s: str) -> str:
    """Write a function to find the longest substring of a string that does not contain any repeated characters.
    >>> find_longest_substring("abcabcbb")
    "abc"
    >>> find_longest_substring("bbbbb")
    "b"
    >>> find_longest_substring("pwwkew")
    "wke"
    """
    pass


def find_longest_subarray(A: List[int]) -> List[int]:
    """Write a function to find the longest subarray of non-negative integers.
    >>> find_longest_subarray([1, 2, 3, 4, 5, 6, 7])
    [1, 2, 3, 4, 5, 6, 7]
    >>> find_longest_subarray([1, 2, -1, -3, 5, 6, 7, -2, 9])
    [5, 6, 7]
    """
    pass


def find_longest_subarray_with_sum(A: List[int], k: int) -> List[int]:
    """Write a function to find the longest subarray whose sum is less than or equal to k.
    >>> find_longest_subarray_with_sum([1, 2, 3, 4, 5, 6, 7], 15)
    [1, 2, 3, 4, 5]
    >>> find_longest_subarray_with_sum([1, 2, -1, -3, 5, 6, 7, -2, 9], 12)
    [5, 6, 7]
    """
    pass
    """
