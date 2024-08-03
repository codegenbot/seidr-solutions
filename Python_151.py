```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)

n = int(input("Enter number of elements: "))
lst = []
for i in range(n):
    num = int(input(f"Enter element {i+1}: "))
    lst.append(num)

print(double_the_difference(lst))