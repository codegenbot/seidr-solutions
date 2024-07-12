def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2

# Define a list named 'lst'
lst = [1, 3, 5, 7]

# Call the function with the defined list
result = double_the_difference(lst)

# Print the result
print(result)