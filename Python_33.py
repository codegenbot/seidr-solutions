def sort_third(l: list):
    for i in range(2, len(l), 3):
        l[i] = sorted([l[i]])[0]
    return l