def modp():
    n = int(input("Enter value of n: "))
    p = int(input("Enter value of p: "))
    if p == 1:
        return 0
    return pow(n, p - 1, p) * n % p

print(modp())