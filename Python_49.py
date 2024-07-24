def powermod(base, exponent, modulus):
    if exponent == 0:
        return 1
    temp = 1
    for _ in range(exponent):
        temp = (temp * base) % modulus
    return temp