def double_the_difference(lst):
    if isinstance(lst, list):
        odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
        return (sum(lst) - odd_sum) * 2
    else:
        raise TypeError("Invalid input")