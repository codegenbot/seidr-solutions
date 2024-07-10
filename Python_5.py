def intersperse(a, b):
    if isinstance(b, int):  
        return [i for pair in zip(a, [b]*len(a)) for i in pair] + [b]
    result = []
    min_len = min(len(a), len(b))
    for i in range(min_len):
        result.append(a.pop(0))
        result.append(b.pop(0))
    result.extend(a)
    result.extend(b)
    return result

list1 = [1, 3, 5]
list2 = ['a', 'b', 'c']
result = intersperse(list1 + list2[:], list2)
print(result)