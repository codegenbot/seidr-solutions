```Python
def sort_third(l: list):
    return [
        sorted([val for val in l if i % 3 == 0])[i % 3 - (1 if i < 2 else 2)] if i % 3 != 0 else val 
        for i, val in enumerate(l)
    ]