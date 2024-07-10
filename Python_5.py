```
def intersperse(a, b):
    result = []
    if hasattr(a, '__iter__') and hasattr(b, '__iter__'):
        min_len = min(len(list(a)), len(list(b)))
        for i in range(min_len):
            result.extend([next(iter(a)), next(iter(b))])
    elif hasattr(a, '__iter__'):
        result.extend([x for x in a])
        for _ in range(len([b])):
            result.append(b)
    else:
        for _ in range(len(list(b))):
            result.append(a)
    return result

list1 = [2]
list2 = [2]
result = intersperse(list1, list2)
print(result)