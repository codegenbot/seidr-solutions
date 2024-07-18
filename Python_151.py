def double_the_difference(lst):
    odd_sum = sum(x for x in lst if x > 0 and x % 2 != 0)
    even_sum = sum(x for x in lst if x > 0 and x % 2 == 0)
    result = 2 * (odd_sum - even_sum ** 2)
    return result

lst = [1, 2, 3, 4, 5]
print(double_the_difference(lst))