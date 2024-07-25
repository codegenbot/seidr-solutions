def sort_third(l):
    result = []
    temp = []
    for x in l:
        temp.append(x)
        if len(temp) == 3:
            result.append(sorted(temp))
            temp = []
    if temp: 
        result.append(sorted(temp)) 
    return tuple(map(lambda x: int(''.join(map(str, x))), result))