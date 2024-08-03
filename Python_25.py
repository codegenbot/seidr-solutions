Here is the completed code:

def factorize(n: int) -> List[int]:
    i = 2
    factors = []
    while n > 1:
        count = 0
        while n % i == 0:
            n /= i
            count += 1
        if count > 0:
            factors.extend([i] * count)
        i += 1
    return factors