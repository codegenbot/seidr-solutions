def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    odds = sorted([x for i, x in enumerate(l) if i % 2 != 0])
    
    result = []
    for i, x in enumerate(l):
        if i % 2 == 0:
            result.append(evens[i//2])
        else:
            result.append(sorted(odds).pop(0) if odds else None)
    return tuple(result)