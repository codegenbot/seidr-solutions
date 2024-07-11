```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    abs_odds = sorted([abs(x) for x in l if x % 2 != 0], reverse=True)
    result = []
    i, j = 0, 0
    
    while i < len(evens) and j < len(abs_odds):
        if abs(evens[i]) > abs_odds[j]:
            result.append(-evens[i])
            i += 1
        else:
            result.append(-abs_odds[j])
            j += 1
    
    result.extend([-x for x in evens][i:])
    result.extend([x for x in abs_odds][j:])
    
    return result