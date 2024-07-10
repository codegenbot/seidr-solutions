```
def intersperse(a, b):
    result = []
    while a or b:
        if a:
            result.append(a.pop(0))
        if b and len(result) % 2 == 1:
            result.append(b.pop(0))
        if a:
            result.append(a.pop(0))
    return result

list1 = [1, 3, 5]
list2 = ['a', 'b', 'c']
result = intersperse(list1 + list2, [])
print(result)