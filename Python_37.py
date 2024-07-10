```
def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    odds = sorted([x for i, x in enumerate(l) if i % 2 != 0])
    
    result = []
    while len(evens) > 0 and len(odds) > 0:
        result.append(min(evens))
        evens.remove(min(evens))
        result.append(min(odds))
        odds.remove(min(odds))
        
    result.extend(evens)
    result.extend(odds)
    
    return tuple(result)