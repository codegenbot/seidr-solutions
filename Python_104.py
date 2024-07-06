def unique_digits(x):
    return sorted(i for i in x if all(int(c) % 2 != 0 for c in str(i)))