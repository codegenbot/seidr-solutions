```Python
def sort_third(l):
    result = []
    temp = []
    for i, x in enumerate(l):
        temp.append(x)
        if (i + 1) % 3 == 0:
            temp = sorted(temp)
            result.append(temp[:])
            temp = []
    if temp: 
        temp = sorted(temp)
        result.append(temp) 
    return [item for sublist in result for item in sublist]