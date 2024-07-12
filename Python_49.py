```
from math import gcd
import functools

def modp(n: int, p: int):
    if n % p == 0:
        return 0
    elif gcd(p, n) == 1:
        return pow(functools.reduce(lambda x,y: x*y % p, [x % p for x in range(1,p)]), (p-1)//gcd(p,n), p) % p
    else:
        return n