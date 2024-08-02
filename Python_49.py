```
def modp(n: int, p: int):
    if gcd(n, p) != 1:
        return None
    a = pow(n, (p-1)//2, p)
    b = pow(p, (p-1)//2, p)
    return pow(a*b % p, -1, p)

def gcd(a: int, b: int):
    while b:
        a, b = b, a%b
    return a

# Example usage:
print(modp(31, 5))  # Should print 3