```
def sort_even(l: list):
    evens = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    odds = [x for i, x in enumerate(l) if i % 2 != 0]
    
    result = []
    even_index = 0
    for x in l:
        if len(evens) > even_index:
            result.append(evens[even_index])
            even_index += 1
        else:
            result.append(odds.pop(0))            
    return result