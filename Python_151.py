```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

list1 = [1, 2, 3]
list2 = [-4, 5, -6]

print(double_the_difference(list1))
print(double_the_difference(list2))