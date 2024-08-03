```Python
def sort_even(l: list):
    return [x if i % 2 != 0 else next((y for y in l if (i // 2) * 2 == j), None) 
            if i < len(l) and (i // 2) * 2 < len(l) else 
            sorted([y for y in l if (i // 2) * 2 == j])[0] 
            for i, x in enumerate(l)]