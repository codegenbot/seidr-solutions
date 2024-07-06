def gcd(a: int, b: int) -> int:
    while b != 0:
        if a % 2 == 1 and b % 2 == 1:
            a = (a - 1) / 2
            b = (b - 1) / 2
        else:
            b = (b - 1) / 2
    return a