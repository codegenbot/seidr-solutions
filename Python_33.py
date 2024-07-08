def sort_third(l: list):
    max_val = next((val for val in l if val % 3 == 0), None)
    return [max_val if max_val and i % 3 == 0 else val for i, val in enumerate(l)]