```
from typing import List

def factorize(n: int) -> str:
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
    
    result = set()
    for f, c in sorted(factors):
        if c > 0:
            result.add(str(f) + '**' + str(c) if c > 1 else str(f))

    return ', '.join(result)

n = int(input("Enter a number: "))
print(factorize(n))