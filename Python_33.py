def sort_third(l: list):
    return sorted([i for i in l if i % 3 != 0]) + (
        l[::3][-1] if len(l) % 3 == 0 else []
    )