def double_the_difference(lst):
    sum_of_squares = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return (sum_of_squares * 8 - max(lst) - min(lst)) // 2