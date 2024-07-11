```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [x for x in l if x % 2 != 0]
    result = []
    i, j = 0, 0
    
    while i < len(evens) or j < len(odds):
        if i < len(evens) and (j >= len(odds) or abs(evens[i]) <= abs(odds[j])):
            result.append(-evens[i])
            i += 1
        else:
            result.append(odds[j])
            j += 1
    
    return result