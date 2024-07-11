def double_the_difference(list1, list2):
    difference = abs(max(list1) - min(list2))
    return difference * 2


print(double_the_difference([1, 3, 5], [8, 4, 7]))