```python
def search(lst):
    """
    This function takes a list of numbers as input and returns the maximum number that appears at least once in the list.
    If no such number exists, it returns -1.
    """
    max_num = -1
    for num in lst:
        if num > 0 and (num > max_num or num == max_num):
            max_num = num
    return max_num