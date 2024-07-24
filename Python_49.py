def modp(n: int, p: int):
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a

    if gcd(n, p) != 1:
        return None 
    else:
        return pow(n, p - 2, p) * n % p if n != 0 else 1