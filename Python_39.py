def is_prime(num):
    if num == 2:
        return True
    if num <= 1 or num % 2 == 0:
        return False
    for i in range(3, int(math.sqrt(num)) + 1, 2):
        if num % i == 0:
            return False
    return True