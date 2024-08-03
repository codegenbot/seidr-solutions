def solution(lst):
    """Return the sum of odd numbers at even indices from a given list."""
    return sum(i for i in lst[1::2] if i % 2 != 0)