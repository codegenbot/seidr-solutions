def double_the_difference(input_list):
    odd_sum = sum(x**2 for x in input_list if x > 0 and isinstance(x, int) and x % 2 != 0)
    return odd_sum * 2

input_list = [1, 2, 3, 4, 5]
result = double_the_difference(input_list)
print(result)