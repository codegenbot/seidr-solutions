def double_the_difference(list1, list2):
    min_val = min(min(list1), min(list2))
    max_val = max(max(list1), max(list2))
    difference = abs(min_val - max_val)
    return difference * 2


print(double_the_difference([1, 3, 5], [8, 4, 7]))