def solution(lst):
    """Filter odd numbers from a list."""
    return sum([i for i in lst if i % 2 != 0])