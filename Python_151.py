def double_the_difference(lst):
    return 2 * sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) if lst else 0

# Call the function with a defined list 'lst'
lst = [3, 5, 7, 9]
result = double_the_difference(lst)
print(result)