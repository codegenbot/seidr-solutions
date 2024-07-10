def sort_third(l):
    return sorted([i for sublist in l if isinstance(sublist, list) for i in sublist] +
                  [x for x in set(l) if not isinstance(x, list)])