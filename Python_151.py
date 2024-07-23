```
def double_the_difference(list1, list2):
    total1 = sum(num**2 for num in list1[0] if isinstance(num, int) and num >= 0)
    total2 = sum(list2[1])
    return abs(total1 - total2) // len(list2[1]) * 2