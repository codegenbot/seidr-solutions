
def remove_duplicates(numbers: List[int]) -> List[int]:
    """
    Given a list of integers, return a new list without any duplicates.
    >>> remove_duplicates([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
    [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    >>> remove_duplicates([1, 1, 2, 2, 3, 3, 4, 4, 5, 5])
    [1, 2, 3, 4, 5]
    """
    return list(set(numbers))