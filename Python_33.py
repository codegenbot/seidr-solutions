def sort_third(l: list):
    return [val if i % 3 != 0 else sorted([x for x in l if i % 3 == 0 and x != val])[0] or val for i, val in enumerate(l)]