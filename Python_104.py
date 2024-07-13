def unique_digits(x):
    if not x.isdigit():
        return []
    return sorted([int(i) for i in str(x) if int(i) % 2 != 0])