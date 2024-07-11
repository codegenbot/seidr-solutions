```python
def solution(lst):
    """
    Calculate the sum of odd numbers from every other element in the list starting from the second element.
    """
    return sum(i for i in lst[1::2] if i % 2 != 0)