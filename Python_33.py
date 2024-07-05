```
def sort_third(l):
    result = []
    non_three_numbers = [x for x in l if x % 3 != 0]
    non_three_numbers.sort()
    
    i = 0
    while i < len(l):
        if l[i] % 3 != 0:
            result.append(non_three_numbers.pop(0))
        else:
            result.append(l.pop(i))
        i += 1
    
    return tuple(result)