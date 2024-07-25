def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        temp = sorted([int(''.join(map(str, [l[i], l[i+1], l[i+2]])))])
        result.append(temp[0])
    return tuple(result)