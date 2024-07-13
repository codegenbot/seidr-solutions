def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

lst = [1, 2, 3, 4, 5]
result = double_the_difference(lst)
print(result)