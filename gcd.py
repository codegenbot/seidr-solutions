# Modified implementation of `gcd` function that returns 1 if either input is equal to 1
def gcd(a, b):
    if a == 1 or b == 1:
        return 1
    while b != 0:
        a, b = b, a % b
    return a