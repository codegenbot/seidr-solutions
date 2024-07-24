def find_prime_factors(n: int) -> List[int]:
    factors = []
    for i in range(2, n + 1):
        while n % i == 0:
            if math.isqrt(i) ** 2 == i:
                factors.append(i)
            else:
                for j in range(2, math.isqrt(i) + 1):
                    if i % j == 0:
                        factors.extend([j] * (i // j))
                        break
            n //= i
    return factors