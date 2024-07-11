def sort_third(l: list):
    odd = sorted([x for i, x in enumerate(l) if (i+1) % 3 != 0])
    even = sorted([x for i, x in enumerate(l) if (i+1) % 3 == 0])
    
    return odd + even