def double_the_difference(lst):
    if len(lst) < 2:
        return 0
    first = min(lst)
    second = max(lst)
    return (second - first) * 2