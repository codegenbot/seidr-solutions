def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)


# Example of how to use the function
lst = [1, 2, 3, 4, 5]  # Replace with the actual list
odd_sum = 35  # Replace with the actual expected sum
check(double_the_difference(lst) == odd_sum)