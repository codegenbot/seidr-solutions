Here is the completed code:

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            while n % i == 0:
                n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return [factor ** (factors.count(factor)) for factor in set(factors)]