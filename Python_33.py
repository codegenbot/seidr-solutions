def sort_third(l: list):
    return sorted(
        [i for sub in l for i in [sub] if isinstance(sub, list) and len(sub) > 2]
        + [x for x in l if not isinstance(x, list)]
    )