def digits(n):
    odd_digits = [int(d) for d in str(n) if int(d) % 2]
    return functools.reduce(lambda x, y: x * y, odd_digits, 1)