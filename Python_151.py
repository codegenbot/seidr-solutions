def double_the_difference(lst):
    lst = [1, 2, 3]
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2

input_list = [1, 2, 3]
result = double_the_difference(input_list)
print(result)