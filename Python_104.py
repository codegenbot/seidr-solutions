def unique_digits(x):
    return sorted(
        set(map(int, filter(lambda y: not any(int(i) % 2 == 0 for i in str(y)), x)))
    )