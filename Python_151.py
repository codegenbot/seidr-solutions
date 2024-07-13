def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

lst = [7, -4, 12, 9, -2]
output = double_the_difference(lst)
print(output)