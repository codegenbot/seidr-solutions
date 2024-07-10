def intersperse(a, b):
    result = []
    if hasattr(a, '__iter__'):
        min_len = min(len(list(a)), len(list(b)))
    else:
        min_len = len(list(b))
    for i in range(min_len):
        result.append(next(iter(a)))
        result.append(next(iter(b)))
    result.extend(list(a)[min_len:])
    result.extend([b] * (len(list(b)) - min_len))
    return result

list1 = [1, 3, 5]
list2 = ['a', 'b', 'c']
result = intersperse(list1 + list2[:], list2)
print(result)