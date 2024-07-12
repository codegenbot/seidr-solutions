```
factors = []
i = 2
while i * i <= n:
    if n % i:
        i += 1
    else:
        n //= i
        count = 0
        while n % i == 0:
            n //= i
            count += 1
        factors.extend([i] * count)
i = 2
while i <= math.sqrt(n):
    if n % i:
        i += 1
    else:
        start = i
        while n % i == 0:
            n //= i
        factors.extend([i] * (start ** 2 // i - 1))
        if n == 1:
            break
factors = list(set(factors))
return sorted(factors)