def sort_third(l: list):
    return [sum(sorted([x for x in l[i - 1:i + 2] if i <= len(l)])) if i <= len(l) - 1 else x
            for i, x in enumerate(l)]