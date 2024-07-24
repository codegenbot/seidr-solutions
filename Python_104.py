def unique_digits(x):
    return set([int(d) for d in str(x) if int(d) % 2 != 0])