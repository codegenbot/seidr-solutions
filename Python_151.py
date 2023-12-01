def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)

# Sample input list
lst = [1, 2, 3, -4, '5', 6]

# Call the function
double_the_difference(lst)