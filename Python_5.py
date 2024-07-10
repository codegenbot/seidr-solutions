```
def intersperse(a, b):
    result = []
    iter_a = iter(a)
    iter_b = iter(b)
    
    for _ in range(len(a) + len(b)):
        try:
            if _ % 2 == 0:
                result.append(next(iter_a))
            else:
                result.append(next(iter_b))
        except StopIteration:
            break
    
    return result

list1 = [1, 3, 5]
list2 = ['a', 'b', 'c']
result = intersperse(list1 + list2, [])
print(result)