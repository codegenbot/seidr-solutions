def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

input_list = [6, 7, 8, 9, 10]  # Actual input list
result = double_the_difference(input_list)
print(result)