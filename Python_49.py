```"
Calculate Modular Exponentiation Power (modp)

In cryptography and mathematics, modular exponentiation is a fast method for performing integer exponentiation when the result is taken modulo n. It can be used in various algorithms such as RSA.

This function takes two parameters: the base number `n` and the power `p`. It calculates `n^p % p` using the property that `(n^(p-2)) % p * n` is equivalent to `n^p % p`.

Example: modp(3, 4) should return 1.

def modp(n: int, p: int):
    return pow(n, (p-2)%p, p) * n % p
"""