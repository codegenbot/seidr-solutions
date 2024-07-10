```
def intersperse(a, b):
    result = []
    for item in a:
        result.append(item)
        if isinstance(b, int):
            result.extend([b] * len([b]))
        else:
            result.append(b)
    return result

list1 = [2, 2, 2]
list2 = 2
result = intersperse(list1, list2)
print(result)