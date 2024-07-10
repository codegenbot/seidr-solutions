def sort_even(l: list):
    return [x if i % 2 != 0 else sorted([y for j, y in enumerate(l) if y <= x])[-1] 
            for i, x in enumerate(sorted(l))]"