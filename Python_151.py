def double_the_difference(list1, list2):
    difference = abs(max(list2) - min(list1))
    return difference * 2

list1 = [int(x) for x in input("Enter the first list of numbers: ").split(",")]
list2 = [int(x) for x in input("Enter the second list of numbers: ").split(",")]

print(double_the_difference(list1, list2))