def solution(lst):
    """
    This function takes a list of integers as input and returns the sum of all odd numbers in the list.
    """
    return sum(i for i in lst if i % 2 != 0)