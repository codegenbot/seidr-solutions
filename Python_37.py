```
def sort_even(l):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    odds = sorted([x for i, x in enumerate(l) if i % 2 != 0])
    
    result = []
    even_index = 0
    for i, x in enumerate(l):
        if i % 2 == 0:
            result.append(evens[even_index])
            even_index += 1
        else:
            result.append(odds[i//2])
    
    return tuple(result)