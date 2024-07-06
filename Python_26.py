
def remove_duplicates(numbers: List[int]) -> List[int]:
    """
    Given a list of integers, returns a new list without duplicates.

    Parameters
    ----------
    numbers : List[int]
        The input list of integers.

    Returns
    -------
    List[int]
        The output list without duplicates.

    Examples
    --------
    >>> remove_duplicates([1, 2, 3, 4, 5])
    [1, 2, 3, 4, 5]
    >>> remove_duplicates([1, 1, 2, 2, 3, 3])
    [1, 2, 3]
    """
    return list(set(numbers))