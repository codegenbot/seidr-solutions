def sort_third(l: list):
    return [val for group in zip(*(iter(sorted(l)) for _ in range(3)) for val in group]