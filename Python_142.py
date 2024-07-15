def check(n):
    return n < 1000 and sum_squares(range(1, int(n**0.5) + 1)) == n