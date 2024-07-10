def sort_third(l: list):
    return sorted([i for subl in l for i in [subl] if isinstance(subl, list)] + 
                  [x for x in l if not isinstance(x, list)], key=lambda x: (0 if isinstance(x, list) else 1, len(x) if isinstance(x, list) else x))