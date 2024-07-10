```
def intersperse(a, b):
    result = []
    if isinstance(b, int):
        a += [b] * (len(a) + 1)
        return a[1:-1]
    else:
        for i in range(len(a) + (1 if isinstance(b, list) or isinstance(b, tuple) else 0)):
            if i < len(a): result.append(a[i])
            if isinstance(b, list) and i % (len(a) + 1) != 0: result.append(b)
            elif b: result.append(b)
    return result

list1 = [2, 2, 2]
list2 = 2
result = intersperse(list1, list2)
print(result)