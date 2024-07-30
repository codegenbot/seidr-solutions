def sort_third(l: list):
    for i in range(2, len(l), 3):
        small, middle, large = sorted([l[i-2], l[i-1], l[i]])
        l[i-2], l[i-1], l[i] = small, middle, large
    return l