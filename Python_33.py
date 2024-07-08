def sort_third(l: list):
    for i in range(2, len(l), 3):
        l[i:i+1] = sorted(l[i:i+1])
    return l