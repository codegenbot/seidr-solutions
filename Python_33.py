def sort_third(l: list):
    return sorted([x if i % 3 != 0 else sorted([j for j in l if j % 3 == 0])[k] 
                   for k, i, x in enumerate(l)])