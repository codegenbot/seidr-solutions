def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        temp = l[i:i+3]
        temp.sort()
        result.append(tuple(temp))
    return tuple(result)