
def digits(n):
    max_digit = max(map(int, str(abs(n))))
    return 0 if n < 0 else max_digit

# Test case 1:
assert digits(2468) == 8

# Test case 2:
assert digits(-123) == 0