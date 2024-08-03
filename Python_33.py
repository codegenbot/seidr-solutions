def sort_third(l: list):
    return [x if i // 3 < len(y) or y else sorted([z for z in l[3*i//3:3*(i//3+1)]])[0]
            for i, x in enumerate(l)]