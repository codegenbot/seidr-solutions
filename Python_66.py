def sumDigits(n):
    total_sum = 0
    while n:
        total_sum += n % 10
        n //= 10
    return total_sum