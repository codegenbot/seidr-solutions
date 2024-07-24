def sort_third(l: list):
    return [sorted(l[i : i + 3]) for i in range(0, len(l), 3) if i + 2 < len(l)] + [
        sorted(l[len(l) - (len(l) % 3) :])
    ]