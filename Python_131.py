
def digits(n):
    max_digit = max(map(int, str(n)))
    return 0 if max_digit not in n else max_digit