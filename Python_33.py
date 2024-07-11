def sort_third(l: list):
    result = []
    for i in range(0, len(l), 3):
        temp = l[i : i + 3]
        if not temp:
            break
        if len(temp) == 1:
            result.append(temp[0])
        else:
            result.append(sorted(temp)[0])
    return tuple(result)