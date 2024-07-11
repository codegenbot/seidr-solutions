```
def sort_third(l: list):
    result = []
    for i in range(0, len(l), 3):
        if l[i:i+3]:
            result.append(sorted(l[i:i+3])[0])
        else:
            result.append(None)
    return tuple(result)