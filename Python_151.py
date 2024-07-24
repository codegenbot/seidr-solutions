def double_the_difference(lst):
    if len(lst) < 2:
        return 0
    avg = sum(lst) / len(lst)
    diff = abs(max(lst) - min(lst)) - abs(avg - min(lst))
    return 2 * diff