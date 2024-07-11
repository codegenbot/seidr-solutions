```
def double_the_difference(list1_1, list2_1, list1_2, list2_2):
    difference = abs(max(list1_1) - min(list2_2))
    return difference * 2


list1 = [1, 3, 5]
list2 = [8, 4, 7]
print(double_the_difference(list1, list1, list2, list2))