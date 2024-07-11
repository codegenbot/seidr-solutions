def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

my_list = [1, -2, 3, 4]
result = double_the_difference(my_list)
print(result)