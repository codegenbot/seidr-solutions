def sort_third(l: list):
    return [v for i, v in enumerate(sorted(l)) if i % 3 == 0]