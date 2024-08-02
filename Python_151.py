def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

# Prompt the user to input a list
lst = input("Enter a list of numbers separated by spaces: ").split()

# Convert the input list elements to integers
lst = [int(x) for x in lst]

# Call the function with the input list
result = double_the_difference(lst)

# Output the result
print(result)