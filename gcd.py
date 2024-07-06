
def gcd(a, b):
    while b != 0:
        if a < b:
            a = b
            b = a % b
        else:
            a = a - b
            b = b % a
    return a