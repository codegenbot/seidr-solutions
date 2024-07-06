def gcd(a, b):
    if a > 2**31 - 1 or b > 2**31 - 1:
        # Use extended Euclidean algorithm for large inputs
        q = (a // b) * (b // a)
        r = a - q * b
        while r != 0:
            q, r = r, r % b
    else:
        # Use modulo operator for small inputs
        return a % b