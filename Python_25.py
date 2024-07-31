Here is the solution:

def factorize(n: int) -> List[int]:
    i = 2
    factors = []
    while n > 1:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.extend([i] * count)
    return factors