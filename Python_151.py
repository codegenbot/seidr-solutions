def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int))


input_list = [1, 2, 3, 4, 5]
print(double_the_difference(input_list))