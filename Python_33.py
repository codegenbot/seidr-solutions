def sort_third(l: list):
    return [value if index % 3 != 0 else sorted(l[index]) for index, value in enumerate(l)]