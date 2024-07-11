```
def sort_third(l: list):
    result = []
    for i in range(0, len(l), 3):
        temp = l[i:i+3]
        if temp:
            result.append(sorted(temp)[0])
        else:
            result.append(None)
    return tuple(result)