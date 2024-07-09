def sort_third(l: list):
    for i in range(0, len(l), 3):
        l[i:i + 3] = sorted(l[i:i + 3])
    return l