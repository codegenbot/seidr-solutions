def double_the_difference(lst):
    if len(lst) < 2:
        return None
    max_val = max(lst)
    min_val = min(lst)
    return (max_val - min_val) * 2