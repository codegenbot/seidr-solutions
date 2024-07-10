def is_power_of_two(n):
    if n < 1:
        return False
    while n % 2 == 0:
        n = n // 2
    return n == 1