def sort_even(l: list):
    return [x if i % 2 != 0 else sorted([y for y in l if y <= x])[j] 
            for j, (i, x) in enumerate(sorted(l))]