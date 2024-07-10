def sum_pairs(lst):
    total = 0
    for i in range(0, len(lst), 2):
        total += lst[i] + lst[i + 1]
    return total