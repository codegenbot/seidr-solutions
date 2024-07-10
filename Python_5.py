```
def intersperse(a, b):
    result = [x for x in a]
    while b:
        result.insert(0, b.pop(0))
        if len(b) % 2 == 1:
            result.append(b.pop(0))
    return result

list1 = [1, 3, 5]
list2 = ['a', 'b', 'c']
result = intersperse(list1 + list2, [])
print(result)