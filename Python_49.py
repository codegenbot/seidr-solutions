def modp(n: int, p: int):
    if p == 1:
        return 0
    result = pow(n, p - 1, p) * n % p
    print(f"The modular exponentiation of {n} to the power of {p-1} with a modulus of {p} is {result}.")
    return result