```
def solution(lst):
    """Given a list of integers, return the sum of all even-indexed elements that are not divisible by 2."""
    return sum(i for i in lst[1::2] if i % 2 != 0)