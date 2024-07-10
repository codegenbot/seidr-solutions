def double_the_difference(lst):
    even_nums = [i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0]
    return double_the_difference_value(even_nums)

double_the_difference_value = lambda x: (max(x) - min(x)) * 2

check_result = double_the_difference([7, 1])
print(check_result)