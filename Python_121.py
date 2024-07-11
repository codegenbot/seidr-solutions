```
def solution(lst):
    """
    This function calculates the sum of all odd numbers from every second element in the list, starting from the second one.
    """
    return sum(i for i in lst[1::2] if i % 2 != 0)