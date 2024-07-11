def modp():
    p = int(input("Enter a prime number: "))
    n = int(input(f"Enter a number that is relatively prime to {p}: "))
    result = pow(n, p - 2, p) * n % p if math.gcd(n, p) == 1 else None
    print(result)