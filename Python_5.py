```
def intersperse(a, b):
    if hasattr(a, '__len__') and hasattr(b, '__len__'):
        result = []
        min_len = min(len(list(a)), len(list(b)))
        for i in range(min_len):
            result.append(next(iter(a)))
            result.append(next(iter(b)))
        result.extend(list(a)[min_len:])
        result.extend([b] * (len(list(b)) - min_len))
    elif not hasattr(a, '__len__') and not hasattr(b, '__len__'):
        return [a, b]
    else:
        if hasattr(a, '__len__'):
            result = []
            for _ in range(len(list(b))):
                result.append(next(iter(a)))
            result.append(b)
        else:
            result = [b]
            for _ in range(a):
                result.append(b)
    return result

list1 = 2
list2 = 2
result = intersperse(list1, list2)
print(result)