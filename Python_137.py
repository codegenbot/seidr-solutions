```
def compare_one(a, b):
    """Compare two values and return the larger one.

    Args:
    a (int|float|string): The first value.
    b (int|float|string): The second value.

    Returns:
    int|float|string: The larger of the two values, or None if they are equal.

    """
    
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace('.', '').replace(',', '.').format(b)
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace('.', '').replace(',', '.')
    if a > b:
        return a
    elif b > a:
        return b
    else:
        return None