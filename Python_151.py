def double_the_difference(lst):
    odd_sum = sum(x**2 for x in lst if x > 0 and x % 2 != 0)
    return 2 * odd_sum


lst = [1, 2, 3, 4, 5]
print(double_the_difference(lst))