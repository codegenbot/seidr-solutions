```
def sort_third(lst):
    if not all(isinstance(i, (list, tuple)) for i in lst): 
        return "Error: Input not list/tuple"
    result = [x[2] for x in lst if isinstance(x, (list, tuple)) and len(x) > 2]
    if not result:
        return "Error: No sublists/tuples found with length more than 2"
    else:
        return tuple(sorted(result))