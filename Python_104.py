def unique_digits(x):
    return sorted([i for i in str(x) if not any(int(d) % 2 == 0 for d in str(i))])