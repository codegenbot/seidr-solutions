def unique_digits(x):
    return sorted([i for i in x if "0" not in str(i) or str(i).count("1") % 2 != 0])