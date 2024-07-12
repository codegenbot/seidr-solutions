def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0 and type(x) == int)

lst = [1, 2, 3, 4, 5]  # Example input list
result = double_the_difference(lst)
print(result)