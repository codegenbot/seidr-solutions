def unique_digits(x):
    return sorted(
        [num for num in x if "0" not in str(num) or str(num).count("1") % 2 != 0]
    )