def sort_third(l):
    result = []
    temp = []
    for x in l:
        temp.append(x)
        if len(temp) == 3:
            result.append(temp)
            temp = []
    if temp: 
        result.append(temp) 
    result.sort(key=lambda x: x[2])
    return tuple(map(int, *map(map, lambda x: str(x), result)))