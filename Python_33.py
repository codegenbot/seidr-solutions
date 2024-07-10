def sort_third(l: list):
    return sorted([x for sublist in l for x in sublist if not isinstance(x, list)] +
                  [sublist for sublist in l if isinstance(sublist, list)])