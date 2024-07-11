def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            if i // 3 * 3 + 1 <= len(l): 
                temp = sorted([x for x in l[:i//3*3+1] if isinstance(x, int)]) 
                result.append(temp[i%3])
            else:
                result.append(None)
        else:
            result.append(l[i])
    return result