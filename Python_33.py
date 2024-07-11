def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            temp = l[i:i+3]
            if len(temp) == 1:
                result.append(temp[0])
            else:
                result.append(sorted(temp)[0])
        else:
            result.append(l[i])
    return tuple(result)