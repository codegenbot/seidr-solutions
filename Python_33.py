```
def sort_third(l: list):
    result = []
    i = 0
    while i < len(l):
        if i % 3 == 0:
            temp = l[i:i+3]
            result.append(sorted(temp)[0] if temp else None)
        elif i < len(l) - 1:
            result.append(min(l[i:]))
        i += 1
    return tuple(result)