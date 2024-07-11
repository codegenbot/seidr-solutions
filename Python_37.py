def sort_even(l: list):
    return [x if y % 2 != 0 else min(z for z in l if z % 2 == 0) 
            for x, y in zip(l, range(len(l)))]