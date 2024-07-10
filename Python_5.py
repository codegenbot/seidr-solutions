def intersperse(a, b):
    result = []
    for i in range(len(a) + len(b)):
        if i % 2 == 0:
            result.append(a.pop(0) if i < len(a) else b.pop(0))
        else:
            result.append(a.pop(0) if i >= len(a) else b.pop(0))
    return result

list1 = [1, 3, 5]
list2 = ['a', 'b', 'c']
result = intersperse(list1 + list2, [])
print(result)