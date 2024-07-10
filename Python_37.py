```
def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])
    result = []
    for i in range(min(len(even), len(odd))):
        result.append(even[i])
        result.append(odd[i])
    if len(even) > len(odd):
        result.extend(even[len(odd):])
    elif len(odd) > len(even):
        result.extend(odd[len(even):])
    return tuple(result)