def sort_third(l: list):
    return sorted([i for sublist in l if isinstance(sublist, list) for i in sublist] + 
                  sorted([x for x in (item for item in l) if not isinstance(x, list)]))