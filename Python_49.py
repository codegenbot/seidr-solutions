```
n = int(input("Enter n: "))
p = int(input("Enter p: "))

def modp(n: int, p: int):
    def extended_euclidean(a: int, b: int) -> tuple:
        if a == 0:
            return (b,)
        else:
            gcd, y, x = extended_euclidean(b % a, a)
            return (gcd,) + (y,) + (x - (b // a) * y,)

    gcd, inv_n, _ = extended_euclidean(n, p)
    if gcd != 1:
        raise ValueError(f"{n} is not invertible modulo {p}")
    return pow(n, inv_n, p)

print(modp(n, p))