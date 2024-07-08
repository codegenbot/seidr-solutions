def sort_third(l: list):
    return [val if i % 3 != 0 else next((x for x in l if x % 3 == 0), None) for i, val in enumerate(l)]