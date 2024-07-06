def double_the_difference(lst):
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    return (abs(7 - 2*odd_sum)) * (7 - 2*odd_sum)