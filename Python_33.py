def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        if i + 2 < len(l): 
            temp = sorted(map(lambda x: int(''.join(map(str, list(x)))), zip(*[iter(l[i:i+3]) for i in range(0, len(l), 3)])))
            result.append(temp[0])
    return tuple(result)