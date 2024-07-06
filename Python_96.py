def count_up_to(n):
    prime_numbers = []
    for i in range(2, n + 1):
        if is_prime(i):
            yield i
    return list(prime_numbers)