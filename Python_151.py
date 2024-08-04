def double_the_difference(input_list):
    odd_sum = sum(x**2 for x in input_list if x % 2 != 0 and x >= 0 and isinstance(x, int))
    return odd_sum * 2 if input_list else 0

result = double_the_difference([3, 5, 7, -2, 9])
print(result)