```
def sort_third(l):
    result = []
    for i, x in enumerate(l):
        if i % 3 != 0:
            result.append(x)
        else:
            temp = sorted([y for y in l[:i+1]])
            result.append(temp[-1])
    return result