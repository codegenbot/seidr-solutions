def count_up_to(n):
    prime_numbers = []
    for i in range(2, n+1):
        if is_prime(i):
            prime_numbers.append(i)
    return prime_numbers

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True