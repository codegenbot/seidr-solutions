def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)


# Example usage
lst = [1, 2, 3, 4, 5]  # define the list
odd_sum = sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)
assert double_the_difference(lst) == odd_sum, "Test failed"
print(double_the_difference(lst))