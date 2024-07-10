def largest_prime_factor(n: int):
    i = n - 1
    while i > 1:
        if n % i == 0 and all(i % j != 0 for j in range(2, int(i**0.5) + 1)):
            return i
        i -= 1