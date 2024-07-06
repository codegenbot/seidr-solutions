def double_the_difference(lst1, lst2):
    return 2 * abs(sum(i for i in lst1 if isinstance(i, int) and i > 0) - sum(j for j in lst2 if isinstance(j, int)))