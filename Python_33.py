from itertools import cycle

def sort_third(l: list):
    evens = [x for j, x in enumerate(l) if (j+1) % 3 == 0]
    odds = sorted([x for j, x in enumerate(l) if (j+1) % 3 != 0])
    result = []
    for _ in range(len(l)):
        result.append(next(cycle(evens)))
        if evens:
            evens.pop(0)
        result.append(next(cycle(odds)))
        if odds:
            odds.pop(0)
    return result