def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

lst = [3, -1, 6, 9, 4]
result = double_the_difference(lst)
print(result)