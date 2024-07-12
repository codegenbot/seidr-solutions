def double_the_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2


def check(lst):
    if len(lst) < 2:
        return "List must contain at least two elements"
    else:
        return double_the_difference(lst)