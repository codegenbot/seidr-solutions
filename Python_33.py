```
def sort_third(l):
    if len(l) < 3:
        return []
    l.sort(key=lambda x: x[2])
    return [x[2] for x in l][::3][:1]