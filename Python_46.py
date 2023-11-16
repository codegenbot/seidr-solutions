

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


def rotate(nums, k):
    """Given an array, rotate the array to the right by k steps, where k is non-negative.
    Example:
    Given 1,2,3,4,5,6,7 and k = 3,
    return [5,6,7,1,2,3,4]
    >>> nums = [1, 2, 3, 4, 5, 6, 7]
    >>> k = 3
    >>> rotate(nums, k)
    [5, 6, 7, 1, 2, 3, 4]
    >>> nums = [-1, -100, 3, 99]
    >>> k = 2
    >>> rotate(nums, k)
    [3, 99, -1, -100]
    """


def check_valid_parentheses(s):
    """Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
    The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
    >>> s = "()"
    >>> check_valid_parentheses(s)
    True
    >>> s = "()[]{}"
    >>> check_valid_parentheses(s)
    True
    >>> s = "(]"
    >>> check_valid_parentheses(s)
    False
    >>> s = "([)]"
    >>> check_valid_parentheses(s)
    False
    """


def find_min(nums):
    """Suppose a sorted array is rotated at some pivot unknown to you beforehand.
    (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
    Find the minimum element.
    You may assume no duplicate exists in the array.
    >>> nums = [4, 5, 6, 7, 0, 1, 2]
    >>> find_min(nums)
    0
    >>> nums = [0, 1, 2, 4, 5, 6, 7]
    >>> find_min(nums)
    0
    """


def three_sum(nums):
    """Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0?
    Find all unique triplets in the array which gives the sum of zero.
    Note: The solution set must not contain duplicate triplets.
    For example, given array S = [-1, 0, 1, 2, -1, -4],
    A solution set is:
    [
      [-1, 0, 1],
      [-1, -1, 2]
    ]
    >>> nums = [-1, 0, 1, 2, -1, -4]
    >>> three_sum(nums)
    [
      [-1, -1, 2],
      [-1, 0, 1]
    ]
    >>> nums = [5, 10, 14, -2, 1]
    >>> three_sum(nums)
    []
    """
    """
