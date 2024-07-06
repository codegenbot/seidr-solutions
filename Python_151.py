def double_the_difference(odd_sum_list):
    return sum(i**2 for i in odd_sum_list if isinstance(i, int) and i % 2 != 0)

check = lambda: print(double_the_difference([1,3,5]))