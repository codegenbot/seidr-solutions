def sort_third(l: list):
    return sorted([x for x in l if not isinstance(x, list)]) + sorted(
        [sub for sub in l if isinstance(sub, list)]
    )