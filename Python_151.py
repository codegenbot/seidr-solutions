def double_the_difference(lst):
    positive_nums = [i for i in lst if isinstance(i, int) and i > 0]
    return sum(n**2 for n in positive_nums) * 2