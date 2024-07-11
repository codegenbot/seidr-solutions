def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

input_list = [1, -2, 3, 0]
result = double_the_difference(input_list)
print(result)