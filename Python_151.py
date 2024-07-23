def double_the_difference(list1, list2):
    total = sum(i**2 for i in list1[0] if isinstance(i, int) and i >= 0)
    return abs(total - sum(x)) // len(x) * 2