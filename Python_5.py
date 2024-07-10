```
def intersperse(a, b):
    result = []
    if hasattr(a, '__iter__'):
        min_len = min(len(list(a)), len(list(b)))
        for i in range(min_len):
            result.append(next(iter(a)))
            result.append(b)
    else:
        for _ in range(len(list(b))):
            result.append(a)
            result.append(b)
    return result

list1 = 2
list2 = 2
result = intersperse(list1, list2)
print(result)