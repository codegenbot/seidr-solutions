def sort_third(l: list):
    sorted_thirds = sorted([l[i] for i in range(len(l)) if i % 3 == 0])
    result = l[:]
    j = 0
    for i in range(len(l)):
        if i % 3 == 0:
            result[i] = sorted_thirds[j]
            j += 1
    return result