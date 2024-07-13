def double_the_difference(lst1, lst2):
    odd_sum = sum(i ** 2 for i in lst1 if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return abs(sum(i for i in lst2) - 2 * odd_sum)