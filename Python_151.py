def double_the_difference(list1_1, list2_1, list1_2, list2_2):
    difference = abs(max(list1_1) - min(list2_2))
    return difference * 2


print(double_the_difference([1, 3, 5], [8, 4, 7], [10, 20, 30], [40, 50, 60]))