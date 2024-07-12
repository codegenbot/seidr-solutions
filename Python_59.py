def largest_prime_factor(n: int):
    i = n - 1
    while i > 1:
        if n % i:
            i -= 1
        else:
            j = 2
            while i % j != 0:
                j += 1
            return i