def double_the_difference(lst):
    return sum((x - lst[0]) ** 2 for x in lst) * 2