def double_the_difference(lst):
    diff = (sum(i**2 for i in lst if isinstance(i, int) and i > 0)) - min((i**2 for i in lst if isinstance(i, int)))
    return str(diff)