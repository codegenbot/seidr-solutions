def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while n > 1:
        if n % i:
            i += 1
        else:
            count = 0
            while n % (i ** (count + 1)) == 0:
                count += 1
            for _ in range(count):
                factors.append(i)
            n //= i**count
    return factors