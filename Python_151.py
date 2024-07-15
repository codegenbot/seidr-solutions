def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

# Define the variable lst
lst = [3, 5, 7, 9, 2, -4, 6]

# Call the function with the defined lst
result = double_the_difference(lst)
print(result)