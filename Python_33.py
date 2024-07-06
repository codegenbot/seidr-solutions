def sort_third(l):
    return [sorted(l[i:i+3]) for i in range(0, len(l), 3)] + ([l[-2:] if len(l) % 3 else []]).sort()