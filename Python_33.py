def sort_third(l: list):
    l_copy = l.copy()
    for i in range(0, len(l) - 2, 3):
        sorted_segment = sorted(l[i:i+3])
        l_copy[i:i+3] = sorted_segment
    return l_copy