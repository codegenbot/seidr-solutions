def sort_third(l: list):
    return sorted(
        [i for sub in l for i in [sub] if isinstance(sub, list)]
        + [x for x in l if not isinstance(x, list)]
    )