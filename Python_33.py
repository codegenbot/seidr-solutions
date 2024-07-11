def sort_third(l: list):
    l_copy = []
    for i in range(0, len(l), 3):
        l_copy.extend(sorted(l[i:i+3]))
    return l_copy