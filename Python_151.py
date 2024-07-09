def double_the_difference(lst):
    squared_positive = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    non_zero_numbers = [i for i in lst if i != 0]
    max_num = max(non_zero_numbers)
    return (squared_positive * 2) - max_num