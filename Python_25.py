Here is the completed code:

def factorize(n: int) -> List[int]:
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            j = 0
            while n % (i ** (j + 1)) == 0:
                j += 1
            for _ in range(j):
                factors.append(i)
            n //= (i ** j)
    if n > 1:
        factors.extend([n] * 1)
    return factors