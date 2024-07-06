def digits(n):
    max_digit = 0
    if n > 0:
        max_digit = max(map(int, str(abs(n))))
    return max_digit