def double_the_difference(lst):
    odd_sum = sum(x**2 for x in lst if x > 0 and x % 2 != 0)
    return odd_sum


lst = [4, -5, 3, 8, 1]
result = double_the_difference(lst)
print(result)