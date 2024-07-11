def sort_third(l: list):
    return [
        (x
         if i % 3 != 0
         else next((y for y in l if (i - l.index(y)) % 3 != 0), None) or next((x for x in sorted((x for i, x in enumerate(l) if i % 3 != 0))), None))
        for i, x in enumerate(l)
    ]