def double_the_difference(lst):
    if lst is not None:
        return sum(i**2 for i in filter(lambda x: isinstance(x, int) and x >= 0, lst)) * 2
    else:
        return None