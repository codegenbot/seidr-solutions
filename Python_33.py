def sort_third(l: list):
    l += [0] * (3 - len(l) % 3)
    return [
        value
        for sublist in [sorted(l[i : i + 3]) for i in range(0, len(l), 3)]
        for value in sublist
    ]