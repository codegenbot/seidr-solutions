def sort_third(l: list):
    return [x if i % 3 != 0 else min([y for y in l if y == x and i % 3 != 0]) 
            if any([y for y in l if y == x and i % 3 != 0]) else [x][0] 
            for i, x in enumerate(l)]