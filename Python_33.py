def sort_third(l: list):
    return [val for i, val in enumerate((sorted([x for x in l[i:i+3] if i%3 == 0])[0] if i % 3 != 0 else val for i, val in enumerate(l)))]