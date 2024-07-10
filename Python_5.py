```
def intersperse(a, b):
    result = []
    if hasattr(a, '__iter__'):
        for item in a:
            result.append(item)
            if isinstance(b, int):
                result.extend([b] * len(list([b])))
            else:
                result.append(b)
    elif isinstance(b, int):
        for _ in range(len([b])):
            result.extend([a])
    return result

list1 = [2]
list2 = 2
result = intersperse(list1, list2)
print(result)