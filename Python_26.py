```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    """
    This function removes duplicate elements from a list of integers.
    
    Args:
        numbers (List[int]): The input list of integers.
    
    Returns:
        List[int]: A new list containing unique elements.
    """
    return list(set(numbers))