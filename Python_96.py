def is_prime(n):
    if n <= 1:
        return False
    count_up_to = 10**n
    for i in range(2, int(count_up_to**0.5) + 1):
        if n % i == 0:
            return False
    return True