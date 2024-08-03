from typing import List

def concatenate(strings: List[str]) -> str:
    """
    This function takes a list of strings as input, 
    and returns a concatenated string.
    
    Parameters:
    strings (List[str]): A list of strings to be concatenated.

    Returns:
    str: The concatenated string.
    """

    return ''.join(sorted(map(str.lower, strings)))