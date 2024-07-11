def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

test_list = [1, -2, 3, 4, 5]
result = double_the_difference(test_list)
print(result)