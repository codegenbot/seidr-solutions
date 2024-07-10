```
def modp(n: int, p: int):
    if n < 0:
        return modp(-n, p)
    elif p < 0:
        return modp(n, -p)
    else:
        n = abs(n)
        p = abs(p)
        if n < 1:
            return 0
        result, power = 1, 0
        while p > 1:
            quotient = p // n
            remainder = p % n
            term = result - quotient * power
            if remainder < n:
                result = power
            else:
                result = term
                p = n
                n = remainder
            power = term
        return result if n >= 0 else p - (p - 1) if n % p != 0 else n