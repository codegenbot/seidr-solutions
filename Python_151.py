def double_the_difference(input_list):
    return sum(x**2 for x in input_list if x > 0 and isinstance(x, int) and x % 2 != 0) * 2

# Define the input list
input_list = [1, 2, 3, 4, 5]

# Call the function with the input list
result = double_the_difference(input_list)

# Output the result
print(result)