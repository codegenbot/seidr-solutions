def solution(lst):
    """Given a list of integers, returns the sum of all odd numbers starting from the second number to the end."""
    return sum(i for i in lst[1::2] if i % 2 != 0)