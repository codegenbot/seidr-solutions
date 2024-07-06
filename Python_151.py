def double_the_difference(lst):
    max_num = max(lst)
    min_num = min(lst)
    diff = abs(max_num - min_num)
    return diff * 2

print(double_the_difference([1, 2, -3, 4]))