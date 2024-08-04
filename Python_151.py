def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)

# Example input list
input_list = [1, 2, 3, 4, 5]

# Calling the function with the input list
result = double_the_difference(input_list)

# Printing the result
print(result)