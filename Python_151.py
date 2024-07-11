def double_the_difference(list1, list2):
    return 2 * abs(max(list1) - max(list2))
print(double_the_difference([1, 3, 5], [2, 4, 6]) == (max(2,4,6) - min(1,3,5)) * 2)