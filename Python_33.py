```
def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            temp = l[i:i+3]
            result.append(sorted(temp)[0] if temp else None)
        else:
            result.append(l[i])
    return tuple(result)