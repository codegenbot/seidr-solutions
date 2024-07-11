def double_the_difference(lst):
    if len(lst) < 2:
        return 0
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff

check(double_the_difference())