def sort_third(l: list):
    return sorted([i for sub in l if isinstance(sub, list) for i in [sub]] +
                  sorted([x for x in [item for sublist in l for item in sublist]
                         if not isinstance(x, list)]))