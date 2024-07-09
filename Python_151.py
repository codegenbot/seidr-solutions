def double_the_difference(lst):
    odd_sum = sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)
    return odd_sum * 2

# Calling the function with a list
result = double_the_difference([1, 2, 3])
print(result)