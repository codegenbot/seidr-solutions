Here is the completed code:

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while n > 1:
        if n % i == 0:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.extend([i] * count)
        i += 1
    return factors