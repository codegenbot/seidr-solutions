def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        temp = [l[i], l[i+1]]
        if i + 2 < len(l):
            temp.append(l[i+2])
        temp.sort()
        result.append(temp[0])
    return tuple(result)