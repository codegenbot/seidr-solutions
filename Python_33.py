def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        temp = l[i:i+3]
        if len(temp) == 3:
            result.append(tuple(sorted(temp)))
        else:
            result.append(tuple(sorted(temp[0:])) + (temp[-1],))
    return tuple(result)