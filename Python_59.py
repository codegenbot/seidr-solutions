def largest_prime_factor(n: int):
    i = n - 1
    while i > 1:
        if n % i == 0:
            for j in range(2, int(i**0.5) + 1):
                if i % j == 0:
                    i -= 1
                    break
            else:
                return i
        i -= 1
    return 2