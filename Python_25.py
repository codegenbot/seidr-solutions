Here is the solution:

def factorize(n: int) -> List[int]:
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                count += 1
                n //= i
            factors.append(i for _ in range(count))
            i += 1
    if n > 1:
        factors.append(n)
    return [factor for factor_list in factors for factor in factor_list]