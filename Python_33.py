def sort_third(l: list):
    return [value for group in zip(*[iter(l)] * 3) for value in sorted(group)]