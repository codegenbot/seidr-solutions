def intersperse(a, b):
    result = []
    for i, item in enumerate(a):
        result.append(item)
        if isinstance(b, (list, tuple)):
            result.extend([b[i % len(b)]])
        else:
            result.append(b)
    return result

list1 = [2, 2, 2]
list2 = [1, 2, 3]
result = intersperse(list1, list2)
print(result)