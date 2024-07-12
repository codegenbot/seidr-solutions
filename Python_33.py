def sort_third(l: list):
    return [
        elem
        for sublist in [sorted(l[i : i + 3], reverse=True) for i in range(0, len(l), 3)]
        for elem in sublist
    ]