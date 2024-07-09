def sort_third(l: list):
    return sorted([elem for group in zip(*[iter(l)] * 3) for elem in sorted(group)])