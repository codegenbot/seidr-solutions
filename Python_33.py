def sort_third(l: list):
    return [
        sorted([x for y in [x if (i := j) % 3 != 0 else next((z for z in l if i > 1), None) for j, x in enumerate(l) if (i := j) % 3 != 0]) or [l[i]] 
        for i, _ in enumerate(l)
    ]