```
def double_the_difference(list1, list2):
    difference = abs(max(list2) - min(list1))
    return difference * 2

list1 = input("Enter elements of list1 separated by space: ").split()
list2 = input("Enter elements of list2 separated by space: ").split()
print(double_the_difference([int(i) for i in list1], [int(i) for i in list2]))