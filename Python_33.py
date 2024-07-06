def sort_third(l: list):
    return [x if i % 3 != 0 else sorted([l[j] for j in range(i-1, len(l), 3)])[0]
            for i, x in enumerate(l)]