def modp():
    n = int(input("Enter number n: "))
    p = int(input("Enter prime number p: "))
    return n ** (1 / p) % p