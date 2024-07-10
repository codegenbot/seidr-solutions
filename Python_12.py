```
from typing import List, Optional

def longest(strings: List[str], n: int) -> Optional[int]:
    """
    This function takes a list of strings and an integer as input.
    It returns the index of the string in the list that has exactly 'n' characters.
    If no such string exists, it returns None.

    Parameters:
    strings (List[str]): A list of strings
    n (int): The length of the desired string

    Returns:
    Optional[int]: The index of the string with 'n' characters or None if not found
    """

    for i, s in enumerate(strings):
        if len(s) == n:
            return i
    return None