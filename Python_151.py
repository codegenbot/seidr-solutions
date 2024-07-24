def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

lst = [4, -5, 3, 8, 1]
odd_sum = double_the_difference(lst)
result = double_the_difference(lst)
print(result)