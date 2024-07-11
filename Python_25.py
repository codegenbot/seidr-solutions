def find_prime_factors(n: int) -> List[int]:
    prime_factors = []

    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            prime_factors.extend([i] * count)

    if n > 1:
        prime_factors.append(n)

    return [int(factor) for factor in set(map(str, prime_factors))]