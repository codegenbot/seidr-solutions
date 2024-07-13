def sort_third(lst):
    if not all(isinstance(i, (list, tuple)) for i in lst): 
        return [i for i in lst if isinstance(i, (list, tuple))]
    result = sorted([x[2] for x in lst if isinstance(x, (list, tuple)) and len(x) > 2])
    return tuple(result)