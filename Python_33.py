def sort_third(l):
    return [x if i % 3 != 0 else sorted([y for y in l if y == x and i % 3 != 0])[0] 
            if any(y == x and i % 3 != 0 for y in l) 
            else x
            for i, x in enumerate(l)]