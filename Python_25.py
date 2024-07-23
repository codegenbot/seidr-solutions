from typing import List

def factorize(n: int) -> list:
    if n <= 1:
        return [n]

    factors = []
    for i in range(2, int(n**0.5) + 1):
        while n % i == 0:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            if count > 0:
                if count > 1:
                    factors.extend([i] * count)
                else:
                    factors.append(i)

    if n > 1:
        factors.append(n)

    return factors