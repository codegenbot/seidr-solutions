from itertools import cycle

def sort_third(l: list):
    result = []
    for i in range(len(l)):
        result.append(next(cycle(sorted([x for j, x in enumerate(l) if (j+1) % 3 != 0]), sorted([x for j, x in enumerate(l) if (j+1) % 3 == 0], reverse=True))))
    return result