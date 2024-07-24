def double_the_difference(lst):
    odd_sum = sum(num ** 2 for num in lst if isinstance(num, int) and num % 2 != 0)
    total_diff = abs((sum(x for x in lst) - len(lst)) * 2)
    return (total_diff + odd_sum)