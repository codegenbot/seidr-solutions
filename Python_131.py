def digits(n):
    total = 0
    while n:
        remainder = n % 10
        if remainder % 2:
            total += remainder
        n //= 10
    return total