def cycpattern_check(a, b):
    num_occurrences = 0
    for i in range(len(a)):
        if b in a[i:] + a[:i]:
            num_occurrences += 1
    return num_occurrences >= 2