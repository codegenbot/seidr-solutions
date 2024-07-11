def sort_even(l: list):
    return [x if y % 2 != 0 else sorted([z for z in l if z % 2 == 0])[0] 
            for i, (x, y) in enumerate(zip(l, l))]