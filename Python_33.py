def sort_third(lst):
    result = [x[2] for x in lst if isinstance(x, (list, tuple)) and len(x) > 2]
    if not result:
        return "Error: No sublists/tuples found"
    else:
        return tuple(sorted(result))