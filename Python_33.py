def sort_third(l: list):
    for i in range(0, len(l), 3):
        sorted_segment = sorted(l[i:i+3])
        l[i:i+3] = sorted_segment
    return l