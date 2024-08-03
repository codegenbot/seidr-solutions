def sort_third(l: list):
    result = []
    for i in range(0, len(l), 3):
        if i + 2 < len(l):
            result.append(sorted([l[i], l[i + 1], l[i + 2]]))
        else:
            result.append(sorted([l[i]]))
    return [item for sublist in result for item in sublist]