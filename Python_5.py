def intersperse(a, b):
    result = [x for x in a]
    while b:
        result.insert(0, b.pop(0))
        if len(b) % 2 == 1:
            result.append(b.pop(0))
    return result

list1 = input("Enter list1 elements (space-separated): ").split()
list2 = input("Enter list2 elements (space-separated): ").split()

result = intersperse(list1 + list2, [])
print(result)