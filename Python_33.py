def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 != 0:
            result.append(l[i])
        elif i % 3 == 0:
            sorted_group = sorted([l[j] for j in range(i, len(l), 3)])
            result.extend(sorted_group)
    return result