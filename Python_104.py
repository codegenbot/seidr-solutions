def unique_digits(x):
    return sorted([i for i in str(x) if int(i) % 2 != 0])