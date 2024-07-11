def double_the_difference(list1, list2):
    max_diff = (max(list2) - min(list1)) * 2
    return max_diff

print(double_the_difference([1, 3, 5], [2, 4, 6]) == (max(6,4,2) - min(1,3,5)) * 2)