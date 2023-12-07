def gcd(a, b):
    from math import gcd, abs
    
    # Check if a and b are negative
    if a < 0 or b < 0:
        return None
    
    # Check if a and b are not co-prime (i.e., they have a common factor)
    if a % b == 0 or b % a == 0:
        return gcd(a, b // abs(b))
    
    # Calculate the greatest common divisor using the Euclidean algorithm
    while b != 0:
        a, b = b, a % b
    return a