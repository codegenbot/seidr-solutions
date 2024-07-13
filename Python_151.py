def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

lst = [5, -3, 10, 8, -1]
output = double_the_difference(lst)
print(output)