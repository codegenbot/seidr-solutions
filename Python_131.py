
def digits(n):
    if n > 0:
        max_digit = max(map(int, str(abs(n))))
        return max_digit
    else:
        return 0