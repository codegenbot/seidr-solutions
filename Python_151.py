def double_the_difference(lst):
    if len(lst) < 2:
        return None
    first = lst[0]
    last = lst[-1]
    diff = abs(first - last)
    return diff * 2