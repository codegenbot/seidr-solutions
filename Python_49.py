```python
def modp(a: int, n: int):
    """
    Calculate a^(p-1) % p * a % p using exponentiation by squaring.
    
    Args:
        a (int): Base number for exponentiation.
        n (int): Power to which 'a' is raised and the modulo value.
        
    Returns:
        int: The result of a^(p-1) % p * a % p.
    """
    return pow(a, n-1, n) * a % n