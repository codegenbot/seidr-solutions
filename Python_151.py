def double_the_difference(lst1, lst2):
    return abs(sum(i**2 for i in lst1 if isinstance(i, int) and i > 0) - 
               sum(i**2 for i in lst2 if isinstance(i, int) and i > 0)) * 2