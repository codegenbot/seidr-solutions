```Python
def sort_third(l):
    sorted_list = sorted((x, i) for i, x in enumerate(l))
    return [x for x, _ in sorted_list if (_ - list(sorted(x for _, x in sorted_list)).index(x)) % 3 == 0][0]