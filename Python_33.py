def sort_third(l: list):
    for i in range(0, len(l), 3):
        l[i] = sorted(l[i:i+3])[0]
    return l