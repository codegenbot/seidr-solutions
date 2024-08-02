def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2


lst = [3, 5, 2, 7]  # Example list of numbers
odd_sum = double_the_difference(lst)  # Call the function with the list
print(odd_sum)  # Output the result