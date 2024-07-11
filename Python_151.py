def double_the_difference(lst):
    odd_sum = sum(i for i in lst if i % 2 != 0)
    even_sum = sum(i for i in lst if i % 2 == 0)
    return abs(even_sum - 2 * odd_sum)


print(double_the_difference([1, 3, 5]))