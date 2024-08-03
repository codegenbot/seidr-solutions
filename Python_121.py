def solution(lst):
    """Return the sum of all odd numbers from every other number starting from the second in a given list."""
    return sum(i for i in lst[1::2] if i % 2 != 0)