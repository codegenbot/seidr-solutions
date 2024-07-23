def check(lst):
    if len(lst) % 2 != 0:
        return double_the_difference(lst, lst)
    return None