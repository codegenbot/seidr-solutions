def sort_third(l: list):
    sublists = [sorted(l[i : i + 3]) for i in range(0, len(l), 3)]
    return [sublist[j] for j in range(len(sublists)) for sublist in sublists]