def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x >= 0 and x % 2 != 0)

# Define the input list
lst = [1, 2, 3, 4, 5]

# Call the function with the defined list
result = double_the_difference(lst)

# Print the result
print(result)