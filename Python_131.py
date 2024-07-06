def digits(n):
    max_digit = max(map(int, str(abs(n))))
    return 0 if n < 0 else 1