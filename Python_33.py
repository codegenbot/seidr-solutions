def sort_third(l: list):
    even = sorted([x for i, x in enumerate(l) if (i+1) % 3 == 0])
    mid = sorted([x for i, x in enumerate(l) if (i+1) % 3 != 0])
    
    return even + mid