def solution(lst):
    """Return the sum of all odd numbers at even indices in a list."""
    return sum(i for i in lst[1::2] if i % 2 != 0)