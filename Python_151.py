def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)

input_list = [3, -2, 5, 7]
result = double_the_difference(input_list)
print(result)