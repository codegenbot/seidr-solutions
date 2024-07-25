```
def modp(n: int, p: int):
    if n == 0:
        return 0
    res = pow((n ** ((p - 1) // 2)), p, p)
    if n % 2 != 0:
        return res * n % p
    else:
        return (res ** 2) % p

n = int(input("Enter the value of n: "))
p = int(input("Enter the value of p: "))

print(modp(n, p))