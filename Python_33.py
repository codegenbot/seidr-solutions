from itertools import cycle

def sort_third(l: list):
    odd = [x for j, x in enumerate(l) if (j+1) % 3 != 0]
    even = [x for j, x in enumerate(l) if (j+1) % 3 == 0]
    
    result = []
    for _ in range(len(l)):
        result.append(next(cycle(sorted([x for j, x in enumerate(l) if (j+1) % 3 != 0] + [x for j, x in enumerate(l) if (j+1) % 3 == 0]), reverse=True)))
    return result