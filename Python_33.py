def sort_third(l):
    return [(*x[1],) for x in sorted([(l[i], l) for i in range(len(l))])]

