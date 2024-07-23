def double_the_difference(first_list, second_list):
    difference = sum(set(first_list).symmetric_difference(second_list))
    return 2 * difference

print(double_the_difference([1, 3], [2, 4]))