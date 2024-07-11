def sort_third(l):
    if len(l) < 3:
        return []
    l.sort(key=lambda x: x[2])
    return [l[i][2] for i in range(len(l)) if (i+1)%3 == 0][:1]