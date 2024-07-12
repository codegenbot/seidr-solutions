def sort_third(l: list):
    return [x if i % 3 != 0 else min(y for j, y in enumerate(l[i//3*3:i//3*3+3]) if y)[1] for i, x in enumerate(l)]