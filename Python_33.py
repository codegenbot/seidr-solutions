def sort_third(l):
    result = []
    temp = []
    for i, x in enumerate(l):
        temp.append(x)
        if (i + 1) % 3 == 0:
            result.append(sorted(temp))
            temp = []
    if temp:
        result.append(sorted(temp))
    return [item for sublist in result for item in sublist]