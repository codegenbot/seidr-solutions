def sort_third(lst):
    result = [x[2] for x in lst if isinstance(x, (list, tuple)) and len(x) > 2]
    if not all(isinstance(i, (int, str)) for i in lst): 
        return "Error: Input not list/tuple"
    if not result:
        return "Error: No sublists/tuples found with length more than 2"
    else:
        return tuple(sorted(result))