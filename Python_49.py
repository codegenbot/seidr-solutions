````
"""
Problem: Modulo Power Operation
Function: modp(n: int, p: int)
This function implements the modulo power operation according to the Miller-Rabin primality test.
It calculates (n^(p-2)) % p * n % p where n and p are integers.
The Miller-Rabin primality test is used to check whether a number is prime or composite.

Task: Complete the code to implement the modulo power operation as described above.
"""
def modp(n: int, p: int):
    return pow(n, (p-2)%p, p) * n % p