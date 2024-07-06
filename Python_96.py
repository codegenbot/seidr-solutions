def count_up_to(n):
    if n <= 2:
        return []
    prime_numbers = []
    for i in range(2, n + 1):
        if is_prime(i):
            prime_numbers.append(i)
    return prime_numbers