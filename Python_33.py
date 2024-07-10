def sort_third(l: list):
    return [
        x if i % 3 != 0 else min(t)
        for i, t in enumerate([l[i : i + 3] for i in range(0, len(l), 3)])
    ]