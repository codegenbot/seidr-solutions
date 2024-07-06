def gcd(a, b):
    while b != 0:
        a_mod = a % b
        if a_mod == 0:
            break
        a = b
        b = a_mod
    return a