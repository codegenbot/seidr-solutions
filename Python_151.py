def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

# Actual list of numbers
my_list = [3, 7, 2, 8, 5]

# Call the function with the actual list
result = double_the_difference(my_list)
print(result)