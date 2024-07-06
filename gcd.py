def gcd(a, b):
    if a > 2**31 - 1 or b > 2**31 - 1:
        q = (a // b) * (b // a)
        r = a - q * b
        while r != 0:
            q, r = r, r % b
    else:
        while b != 0 or a_mod != 0:
            a_mod = a % b
            if a_mod == 0:
                break
            b = b - (a_mod // b) * b
    return b