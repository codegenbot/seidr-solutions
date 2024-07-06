def gcd(a, b):
    while b > 0 and a_mod >= 0:
        a_mod = a % b
        if a_mod == 0:
            break
        b = b - (a_mod // b) * b
    return b