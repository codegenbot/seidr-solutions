```
def sort_third(l):
    return [sorted(t) for i, t in enumerate([l[i:i+3] for i in range(0, len(l), 3)],1)]