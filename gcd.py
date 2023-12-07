def gcd(a, b):
    from math import gcd, abs
    
    # Check if a and b are negative
    if a < 0 or b < 0:
        return None
    
    # Calculate the greatest common divisor using the Euclidean algorithm
    while b != 0:
        q = a // b
        r = a % b
        a = b
        b = r
    return a