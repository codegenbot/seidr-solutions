```
def separate_paren_groups(paren_string: str) -> List[str]:
    """
    This function separates parentheses into groups based on the given string.
    
    Parameters:
    paren_string (str): The input string containing parentheses.
    
    Returns:
    List[str]: A list of strings, each representing a group of parentheses in the input string.
    """
    return ['(' + pair[1:-1] + ')' for pair in paren_string.split('()')]