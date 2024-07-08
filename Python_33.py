def sort_third(l: list):
    max_val = next((val for val in l if val % 3 == 0), None)
    return [val if i % 3 != 0 else max_val for i, val in enumerate(l)]