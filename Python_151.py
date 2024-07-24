def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)

# Define the input list
lst = [1, 2, 3, 4, 5]

# Call the function with the defined list
output = double_the_difference(lst)

# Print the output
print(output)