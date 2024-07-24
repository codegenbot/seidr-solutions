def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)

# Define the input list
lst = [3, -1, 6, 7, 5]

# Call the function with the defined list
output = double_the_difference(lst)

# Print the output
print(output)