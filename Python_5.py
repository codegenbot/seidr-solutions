```Python
list1 = [1, 3]
list2 = [2, 4]

def intersperse(a, b):
    result = []
    while any(x for x in (a, b)):
        if a and (not b or len(result) % 2 == 0):
            result.append(a.pop(0))
        elif b:
            result.append(b.pop(0))            
        else:
            result.extend(a)
            break
    return result

print(intersperse(list1, list2))