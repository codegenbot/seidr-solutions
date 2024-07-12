def factorize(n: int) -> List[int]:
    if not isinstance(n, int):
        raise TypeError("Input should be an integer.")
    if n < 1:
        raise ValueError("Input should be a positive integer.")

    if n <= 1:
        return [n]
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                count += 1
                n //= i
            factors.append(i ** count)
            i = 2
    if n > 1:  
        return [n]
    return sorted([int(f) for f in set(map(str, factors))])