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
if n == 2:
    factors.append(2)