def double_the_difference(list1, list2):
    total = 0
    for num in list1[0]:
        if isinstance(num, int) and num >= 0:
            total += num**2
    return abs(total - sum(list2)) // len(list2) * 2