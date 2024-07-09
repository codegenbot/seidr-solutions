def sort_third(l: list):
    for i in range(2, len(l), 3):
        l[i - 2 : i + 1] = sorted(l[i - 2 : i + 1], reverse=True)
    return l