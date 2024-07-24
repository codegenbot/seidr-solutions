def sort_third(l: list):
    return [
        sorted([x for x in l[i::3]])[0] if i % 3 < 2 else x 
        for i, x in enumerate(l)
    ]