def sort_third(l: list):
    return [i if i % 3 != 0 else sorted([j for j in l if (j % 3 == 0 and l.index(j) < l.index(i)) or (j % 3 != 0 and j < i])][::-1].pop(0) for i in l]