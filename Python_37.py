def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([x for x in l if x % 2 != 0])
    
    result = []
    while evens and odds:
        result.append(odds.pop(0))
        if evens:
            result.append(evens.pop(0))
        
    result.extend(evens)
    result.extend(odds)
    
    return tuple(result)