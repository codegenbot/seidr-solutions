def sort_third(l: list):
    if len(l) % 3 != 0:
        l += [0] * (3 - len(l) % 3)
    
    return [flatten_list(sorted([l[i], l[i+1], l[i+2]], reverse=True)) for i in range(0, len(l), 3)]