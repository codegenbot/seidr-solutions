from itertools import cycle

def sort_third(l: list):
    first_half = sorted([x for i, x in enumerate(l) if i % 3 != 0])
    second_half = sorted([x for i, x in enumerate(l) if i % 3 == 0], reverse=True)
    
    result = []
    for i, x in enumerate(l):
        if i % 3 != 0:
            result.append(x)
        else:
            if i // 3 < len(first_half):
                result.append(first_half[i // 3])
            else:
                result.append(second_half[i // 3 - len(first_half)])
    return result