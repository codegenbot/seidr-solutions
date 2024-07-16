```
def sort_third(l):
    result = []
    i = 0
    while i < len(l):
        if i % 3 == 0:
            temp = [x for j in range(i + 1) if (j % 3) != 0]
            result.append(sorted(temp)[0])
        else:
            result.append(l[i])
        i += 1
    return result