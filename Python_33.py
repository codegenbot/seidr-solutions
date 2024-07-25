def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        if i+2 < len(l): 
            temp = sorted([int(''.join(map(str, [l[i], l[i+1], l[i+2]])))]])
            result.append(temp[0])
    return tuple(result)