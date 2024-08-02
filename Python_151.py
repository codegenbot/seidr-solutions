def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)


# Replace the input_list with your list of numbers
input_list = [3, 5, 7, 9, 11]

# Call the function with the input list
result = double_the_difference(input_list)
print(result)