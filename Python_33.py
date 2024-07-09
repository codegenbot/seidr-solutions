def sort_third(l: list):
    for i in range(2, len(l), 3):
        end_index = min(i + 1, len(l))
        l[i - 2 : end_index] = sorted(l[i - 2 : end_index])[::-1]
    return l