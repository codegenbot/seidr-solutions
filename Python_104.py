def unique_digits(x):
    return sorted([i for i in x if all(int(digit) % 2 != 0 for digit in str(i))])