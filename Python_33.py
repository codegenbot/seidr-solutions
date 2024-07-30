def sort_third(l: list):
    for i in range(0, len(l), 3):
        l[min(i + 2, len(l) - 1) : i - 1 : -1] = sorted(l[min(i + 2, len(l) - 1) : i - 1 : -1])
    return l