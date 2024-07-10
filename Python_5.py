```
def intersperse(a, b):
    result = []
    while a and b:
        result.append(a.pop(0))
        result.append(b.pop(0))
    result.extend(a if a else b)
    return result

list1 = [1, 3, 5]
list2 = ['a', 'b', 'c']
print(intersperse(list1 + list2, []))