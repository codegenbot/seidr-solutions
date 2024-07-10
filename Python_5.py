```
def intersperse(a, b):
    result = []
    if hasattr(a, '__iter__'):
        min_len = min(len(list(a)), len(list(b)))
        for i in range(min_len):
            result.append(next(iter(a)))
            result.append(b)
    else:
        length = max(len(list(a)), len(list(b)))
        for _ in range(length):
            result.append(a)
            if isinstance(b, int):
                result.append(b)
            else:
                result.append(next(iter(b)))
    return result

list1 = [2]
list2 = [2]
result = intersperse(list1, list2)
print(result)