def double_the_difference(list1_1, list2_1, list1_2, list2_2):
    difference = abs(max(list1_1) - min(list2_2))
    return difference * 2


print(double_the_difference([1, 3], [8, 4], [10, 20], [40, 50]))