def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and type(x) == int and x % 2 != 0)

# Example function call with a list as input
result = double_the_difference([1, 2, 3, 4, 5])
print(result)