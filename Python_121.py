```
def solution(lst):
    """Return sum of odd numbers in every other element from the input list."""
    return sum(i for i in lst[1::2] if i % 2 != 0)