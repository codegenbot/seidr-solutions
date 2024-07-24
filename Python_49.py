```
"""
Given two integers n and p, where n is not divisible by p, 
return a value k such that k^p ≡ n (mod p).

The function should use the exponentiation algorithm to compute this.

Note: The inputs are guaranteed to be valid, so you don't need to add error checking code.
"""

def modp(n: int, p: int):
    return pow(n, (p-2)%p, p) * n % p