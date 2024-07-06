def gcd(a: int, b: int) -> int:
    """
    Calculate the greatest common divisor (GCD) of two integers using the Euclidean algorithm.
    """
    while b != 0:
        a, b = b, a % b
    return a