def sort_third(l: list):
    result = []
    for i in range(0, len(l), 3):
        if l[i] % 3 != 0:
            result.append(sorted([x for x in l[: i + 1] if x % 3 != 0])[::-1])
        else:
            result.append([l[j] for j in range(i, len(l), 3)])
    return result