```
def intersperse(a, b):
    result = []
    if hasattr(a, '__iter__'):
        min_len = min(len(list(a)), len(list(b)))
    else:
        min_len = 0
    for i in range(min_len):
        result.append(next(iter(a)))
        result.append(next(iter(b)))
    result.extend([a] * (min_len - len(list(a))))
    if a != b:
        result.extend([b] * ((len(result) // 2) + len(list(a)) % 2))
    return result

list1 = [1, 3, 5]
list2 = ['a', 'b', 'c']
result = intersperse(list1 + list2[:], list2)
print(result)