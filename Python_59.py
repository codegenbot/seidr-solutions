def largest_prime_factor(n: int):
    largest = 1
    for i in range(2, n + 1):
        if n % i == 0:
            while n % i == 0:
                n //= i
            if is_prime(i) and i > largest:
                largest = i
    return largest


def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True