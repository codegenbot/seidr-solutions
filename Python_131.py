def digits(n):
    odd_count = 0
    while n:
        digit = n % 10
        if digit % 2 != 0:
            odd_count += 1
        n //= 10
    return odd_count