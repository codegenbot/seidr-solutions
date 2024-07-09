def double_the_difference(lst):
    return 2 * sum(x ** 2 for x in lst if isinstance(x, int) and x % 2 != 0)

lst = [1, 2, 3]  # example list
odd_sum = double_the_difference(lst)
print(odd_sum)