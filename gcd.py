def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)  # Return absolute value to handle negative numbers