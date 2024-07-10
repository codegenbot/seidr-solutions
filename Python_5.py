```
def intersperse(a, b):
    result = []
    a = list(a) if not isinstance(a, list) else a
    b = list(b) if not isinstance(b, list) else b
    min_len = min(len(a), len(b))
    for i in range(min_len):
        result.append(a.pop(0))
        result.append(b.pop(0))
    result.extend(a)
    result.extend(b)
    return result

list1 = [1, 3, 5]
list2 = ['a', 'b', 'c']
result = intersperse(list1 + list2, list2)
print(result)