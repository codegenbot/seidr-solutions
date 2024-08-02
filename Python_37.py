```Python
def sort_even(l: list):
    return [sorted([y for y in l if i % 2 == 0])[i//2] if i % 2 != 0 else x 
            for i, x in enumerate(sorted([y for y in l if i % 2 == 0]))]