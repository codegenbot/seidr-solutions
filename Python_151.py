def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)


# Input list
actual_list = [2, 3, 6, 7, 9]

# Call the function with the actual list
result = double_the_difference(actual_list)
print(result)