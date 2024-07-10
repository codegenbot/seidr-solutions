def intersperse(a, b):
    result = []
    if hasattr(a, '__iter__'):
        min_len = len(list(a))
        for i in range(min_len):
            if isinstance(b, int):
                for _ in range(len([b])):
                    result.append(next(iter(a)))
            else:
                result.append(next(iter(a)))
                result.append(b)
    else:
        for _ in range(len([b])):
            result.extend([a])
    return result

list1 = [2]
list2 = 2
result = intersperse(list1, list2)
print(result)