def sort_third(lst):
    numbers = sorted([x for x in lst if not isinstance(x, list)])
    lists = [sorted(x)[2:] if len(sorted(x)) >= 3 else [] for x in lst if isinstance(x, list)]

    return numbers + [item for sublist in lists for item in sublist]