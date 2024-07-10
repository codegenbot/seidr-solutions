def intersperse(a, b):
    result = []
    min_len = min(len(a), len(b))
    for i in range(min_len):
        result.append(next(iter(a)))
        result.append(next(iter(b)))
    result.extend(list(a)[min_len:])
    result.extend(list(b)[min_len:])
    return result

list1 = [1, 3, 5]
list2 = ['a', 'b', 'c']
result = intersperse(list1 + list2[:], list2)
print(result)