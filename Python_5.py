list1 = [1, 3]
list2 = [2, 4]

def solve(list1, list2):
    result = []
    while any(x for x in (list1, list2)):
        if list1 and (not list2 or len(result) % 2 == 0):
            result.append(list1.pop(0))
        elif list2:
            result.append(list2.pop(0))            
        else:
            result.extend(list1)
            break
    return result

print(solve(list1, list2))