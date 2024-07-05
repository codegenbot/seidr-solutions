def sort_third(l: list):
    return sorted((x for i, x in enumerate(l) if (i := i % 3) != 0), key=lambda x: (next((y for y in l if (k:=k%3) == 0), None))