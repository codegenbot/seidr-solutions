def sort_third(l: list):
    for i in range(2, len(l), 3):
        l[i] = sorted([l[i-2], l[i-1], l[i]])[2]
    return l