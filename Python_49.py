```
def modp(n: int, p: int):
    if gcd(n, p) != 1:
        return None
    a, b = extended_euclidean_algorithm(n, p)
    return a % p

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a

def extended_euclidean_algorithm(a: int, b: int):
    if not b:
        return 1, 0
    s, old_s = 0, 1
    t, old_t = 1, 0
    r, old_r = b, a
    while r:
        quotient = old_r // r
        old_r, r = r, old_r - quotient * r
        temp_s = old_s
        old_s, s = s, temp_s - quotient * s
        temp_t = old_t
        old_t, t = t, temp_t - quotient * t
    return old_s, old_t