```python
def cycpattern_check(a, b):
    """
    Checks if string 'b' is a cyclic pattern of string 'a'.
    
    Args:
        a (str): The main string.
        b (str): The potential cyclic pattern.

    Returns:
        bool: True if 'b' is a cyclic pattern of 'a', False otherwise.
    """
    return any(b in a[i:]+a[:i] for i in range(len(a)))