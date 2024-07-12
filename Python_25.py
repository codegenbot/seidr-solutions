Here is the solution:

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while n > 1:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    return [i for i in set(factors)]