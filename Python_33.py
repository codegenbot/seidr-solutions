def sort_third(l):
    return [x for i in range(0, len(l), 3) for x in (sorted([l[i], l[i+1], l[i+2]]) if i + 2 < len(l) else sorted([l[i], l[i+1]]) if i + 1 < len(l) else [l[i]] )]