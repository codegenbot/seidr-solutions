```
n = int(input("Enter the number of elements in the list: "))
numbers = [int(x) for x in input(f"Enter {n} space-separated numbers: ").split()]
print(double_the_difference(numbers))