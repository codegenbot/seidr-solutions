from itertools import cycle, accumulate

def sort_third(l: list):
    odd = [x for j, x in enumerate(l) if (j+1) % 3 != 0]
    even = [x for j, x in enumerate(l) if (j+1) % 3 == 0]
    
    result = []
    for _ in range(len(l)):
        result.append(next(accumulate(reversed(sorted([x for j, x in enumerate(l) if (j+1) % 3 != 0] + [x for j, x in enumerate(l) if (j+1) % 3 == 0])), initial=None)).next)
    return result