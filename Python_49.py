def find_prime_divisors(n):
    i = 2
    prime_divisors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            while n % i == 0:
                n //= i
            prime_divisors.append(i)
    if n > 1:
        prime_divisors.append(n)
    return prime_divisors