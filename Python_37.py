```
def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])
    
    result = []
    for i in range(len(even)):
        if i < len(odd):
            result.append(even[i])
            result.append(odd[i])
        else:
            result.extend(even[i:])
            
    return tuple(result)