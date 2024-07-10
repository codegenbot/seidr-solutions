def sort_even(l: list):
    return [sorted([y for y in l if y <= x])[j] 
            if (i := j) % 2 != 0 else x 
        for i, x in enumerate(sorted(l))]