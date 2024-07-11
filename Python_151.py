def double_the_difference(lst1, lst2):
    difference = abs(max(lst1) - min(lst2))
    return difference * 2


print(double_the_difference([1, 3, 5], [8, 4, 7]))