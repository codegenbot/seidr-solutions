```
def factorize(n: int) -> List[int]:
    factors = []
    if n > 1:
        if all(n % i != 0 for i in range(2, math.isqrt(math.sqrt(n)) + 1)):
            factors.append(n)
        else:
            for i in range(2, math.isqrt(n) + 1):
                count = 0
                while n % i == 0:
                    n //= i
                    count += 1
                if count > 0:
                    if count > 1:
                        factors.extend([i] * count)
                    else:
                        factors.append(i)
    return factors