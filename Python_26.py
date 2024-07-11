````
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    '''
    This function takes a list of integers as input, removes duplicates, 
    and returns the resulting list.

    Parameters:
    numbers (List[int]): A list.of integers

    Returns:
    List[int]: The list with duplicates removed
    '''

    return list(set(numbers))