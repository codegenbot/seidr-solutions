Here is your updated gcd function:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)