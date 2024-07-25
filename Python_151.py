def double_the_difference(lst):
    lst = [x for x in lst if x > 0 and x % 2 != 0]
    return sum(x**2 for x in lst)

lst = [1, 2, 3, -4, 5, -6]
odd_sum = double_the_difference(lst)
print(odd_sum)