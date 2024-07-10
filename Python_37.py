def sort_even(l: list):
    return [x if i % 2 != 0 else sorted([y for y in l if y <= x])[-1] 
        for _, x in enumerate(sorted(l))].