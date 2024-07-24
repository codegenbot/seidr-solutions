def largest_prime_factor(n: int):
    i = n - 1
    while i > 1:
        if n % i == 0:
            prime_found = False
            for j in range(2, int(i ** 0.5) + 1):
                if i % j == 0:
                    prime_found = True
                    break
            if not prime_found:
                return i
        i -= 1
    return None