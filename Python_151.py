```
n = int(input("Enter the number of elements in the list: "))
lst = list(map(int, input(f"Enter {n} space-separated integers: ").split()))
difference = max(lst) - min(lst)
double_diff = difference * 2
print(double_diff)

def check(func):
    print(func())
check(lambda: double_the_difference())