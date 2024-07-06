def sort_third(l: list):
    return [val if i % 3 != 0 else min(list(filter(lambda x: x in l, list(range(3*(l.index(val)+1), len(l+1), 3))))) for i, val in enumerate(l)]