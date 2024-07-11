```
def double_the_difference(list1, list2):
    odd_sum = sum(i for i in list1 if i % 2 != 0)
    difference = abs(max(min(list1), min(list2)) - max(max(list1), max(list2)))
    return difference * 2


print(double_the_difference([1, 3, 5], [8, 4, 7]))