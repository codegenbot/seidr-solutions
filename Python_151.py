def double_the_difference(list1, list2):
    list1.sort()
    list2.sort()
    if len(list1) != len(list2):
        return None
    difference = sum(x - y for x, y in zip(list1, list2))
    return difference * 2


print(double_the_difference([7, 1], [5, 3, 2]))