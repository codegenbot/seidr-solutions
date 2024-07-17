Here is the completed code for the gcd problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)