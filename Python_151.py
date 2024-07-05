def double_the_difference(lst):
    return sum(x ** 2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)

# Define lst with appropriate test values
lst = [1, 2, 3, 4, 5]

def check(double_the_difference):
    return double_the_difference(lst) == odd_sum

# Calculate odd_sum outside the check function
odd_sum = sum(x ** 2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)

# Now call check function
print(check(double_the_difference))