from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

data = list(map(int, input().split()))
results = []
for n in data:
    result = factorize(n)
    results.append(result)
print(results)