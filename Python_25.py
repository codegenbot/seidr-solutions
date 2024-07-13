```
from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                count += 1
                n //= i
            factors.append((i, count))
    if n > 1:  
        factors.append((n, 1))
    return [f for f in set([str(i ** c) for i, c in factors])]

n = int(input("Enter a number: "))
print(factorize(n))