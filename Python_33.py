def sort_third(l: list):
    for i in range(2, len(l), 3):
        l[max(i - 2, 0) : i + 1] = sorted(l[max(i - 2, 0) : i + 1])
    return l