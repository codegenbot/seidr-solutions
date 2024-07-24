```"""
The modulo power (modp) function calculates the modular exponentiation of n raised to the power p-2 in modulo p.

Task: Implement a function modp(n, p) that returns the result of (n^(p-2)) % p.

Example:

Input: modp(5, 11)
Output: 5

Parameters:
n - an integer
p - an integer

Return type: int
"""

def modp(n: int, p: int):
    return pow(n, (p-2)%p, p) * n % p