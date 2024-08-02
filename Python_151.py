def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2 if lst else 0

# Test case for the function
lst = [1, 3, 5, 7]
odd_sum = double_the_difference(lst)
print(odd_sum)