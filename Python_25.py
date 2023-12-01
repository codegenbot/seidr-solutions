def factorize(n: int) -> List[int]:
    factors = []
    # divide n by 2 until it is no longer divisible by 2
    while n % 2 == 0:
        factors.append(2)
        n //= 2

    # divide n by odd numbers starting from 3
    # only need to check numbers up to the square root of n
    for i in range(3, int(n**0.5) + 1, 2):
        while n % i == 0:
            factors.append(i)
            n //= i

    # if n is not 1, then it is a prime number itself
    if n > 1:
        factors.append(n)

    return factors