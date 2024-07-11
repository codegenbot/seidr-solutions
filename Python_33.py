def sort_third(l):
    if len(l) < 3:
        return []
    l.sort(key=lambda x: x[2])
    return [i[2] for i in range(0, len(l), 3)][0]