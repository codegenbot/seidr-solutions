def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

# Input list of numbers
lst = [1, 2, 3, 4, 5]

# Calculate the expected result
odd_sum = double_the_difference(lst)

# Call the function with the defined list
result = double_the_difference(lst)
print(result)