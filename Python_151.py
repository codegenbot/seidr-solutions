def double_the_difference(lst):
    lst.sort()
    min_val = (lst[0] + lst[1]) * 2
    return min_val


print(double_the_difference([1, 2, -3, 4]))