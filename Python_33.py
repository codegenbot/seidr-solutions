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
    return [item for sublist in result for item in sublist]