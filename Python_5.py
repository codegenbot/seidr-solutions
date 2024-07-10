Here is the modified code:

```
def intersperse(a, b):
    result = []
    for i in range(len(a) + (1 if isinstance(b, int) else 0)):
        if i < len(a): result.append(a[i])
        if isinstance(b, int) and i % (len(a) + 1) != 0: result.append(b)
        elif b: result.append(b)
    return result

list1 = [2, 2, 2]
list2 = 2
result = intersperse(list1, list2)
print(result)