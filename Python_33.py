def sort_third(l: list):
    return sorted(
        [x for x in l],
        key=lambda x: 0 if x % 3 != 0 else -sorted([i for i in l if i % 3 == 0])[-1],
    )