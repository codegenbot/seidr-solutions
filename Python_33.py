def sort_third(l):
    if len(l) < 3:
        return []
    l.sort(key=lambda x: int(x))
    return [x for i, x in enumerate(l) if (i + 1) % 3 == 0][:1]