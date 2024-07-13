def sort_third(l: list):
    l = [l[i : i + 3] for i in range(0, len(l), 2)]
    return [sorted(sublist) if sublist else [] for sublist in l]