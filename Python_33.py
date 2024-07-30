def sort_third(l: list):
    for i in range(2, len(l), 3):
        l[i] = min(l[i - 2 : i + 1])
    return l

assert sort_third([5, 6, 3, 4, 8, 9, 2, 1]) == [5, 6, 3, 3, 8, 6, 2, 1]