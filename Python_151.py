```
def double_the_difference(list1, list2):
    difference = abs(max(list2) - min(list1))
    return difference * 2


list1 = [int(i) for i in input("Enter elements of List 1 (space-separated): ").split()]
list2 = [int(i) for i in input("Enter elements of List 2 (space-separated): ").split()]

print(double_the_difference(list1, list2))