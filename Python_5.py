```
def intersperse(a, b):
    result = [a[0]]
    for item in a[1:]:
        result.extend([item, b])
    if isinstance(b, int):
        result.append(b)
    else:
        result.append(b)
    return result

list1 = [2, 2, 2]
list2 = 2
result = intersperse(list1, list2)
print(result)