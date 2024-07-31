Here is the completed code:

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            if len(factors) == 0 or factors[-1] != i:
                factors.append(i)
            else:
                factors[-1] += 1
    if n > 1:
        factors.append(n)
    return factors