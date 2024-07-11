Here is the completed code for the gcd problem:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a