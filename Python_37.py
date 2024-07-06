```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [x for x in l if x % 2 != 0]
    
    result = []
    while evens and odds:
        result.append(evens.pop(0))
        result.append(odds.pop(0))
        
    while evens:
        result.append(evens.pop(0))
    while odds:
        result.append(odds.pop(0))
        
    return tuple(result)