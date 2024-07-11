```
def add(lst):
    """
    Function signature:
    - Input: List of numbers
    - Output: The sum of all even numbers in the list
    Returns the sum of all even numbers in the input list.
    :param lst: A list of numbers
    :return: The sum of all even numbers
    """
    return sum(i for i in lst[1::2] if i % 2 == 0)