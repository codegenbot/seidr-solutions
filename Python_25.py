Here is the solution:

def factorize(n: int) -> List[int]:
    i = 2
    factors = []
    while n > 1:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    return [factor ** factors.count(factor) for factor in set(factors)]