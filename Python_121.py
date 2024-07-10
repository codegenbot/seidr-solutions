```Python
"""Given an input list of integers, this function calculates the sum of all odd numbers starting from the second element and incrementing by 2."""
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)