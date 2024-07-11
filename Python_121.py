```python
def solution(lst):
    """
    This function calculates the sum of all odd numbers in a given list.
    The list should be input by the user.
    
    Parameters:
    lst (list): A list of integers
    
    Returns:
    int: The sum of all odd numbers in the list
    """
    return sum(i for i in lst[1::2] if i % 2 != 0)