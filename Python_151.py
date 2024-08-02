def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

# Actual list of numbers
numbers = [3, 5, 7, 9, 11]

# Call the function with the actual list
result = double_the_difference(numbers)
print(result)