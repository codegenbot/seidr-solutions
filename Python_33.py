def sort_third(l: list):
    even = [(x, i+1) for i, x in enumerate(l) if (i+1) % 3 == 0]
    mid = [(x, i+1) for i, x in enumerate(l) if (i+1) % 3 != 0]
    
    return sorted([x for _, x in even + mid])