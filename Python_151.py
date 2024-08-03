def double_the_difference(lst):
    difference = abs(sum(i for i in lst) - len(lst)) * 2
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0) + difference