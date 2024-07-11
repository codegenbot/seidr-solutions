def double_the_difference(lst):
    if len(lst) < 2:
        raise ValueError("List must contain at least two elements")
    min_val = min(i for i in lst if isinstance(i, int))
    max_val = max(i for i in lst if isinstance(i, int))
    return abs(min_val - max_val)