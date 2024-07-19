```
def sort_third(l: list):
    result = []
    i = 0
    while i < len(l):
        if i % 3 == 0:
            result.append(min([x for x in l[i:] if x % 3 == 0]))
        else:
            result.append(l[i])
        i += 1
    return result