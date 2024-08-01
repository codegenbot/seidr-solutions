```
def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            if l[i] % 3 != 0:
                result.append(sorted([x for x in l[:i+1] if x % 3 != 0])[::-1])
            else:
                result.append([l[i]])
        else:
            result.append([l[i]])
    return result