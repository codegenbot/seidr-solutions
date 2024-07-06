
def count_up_to(n):
    prime_numbers = []
    if n == 1:
        return [1]
    for i in range(2, n + 1):
        if is_prime(i):
            prime_numbers.append(i)
    return prime_numbers