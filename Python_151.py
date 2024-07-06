```
def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]

lst = input("Enter a list of numbers: ").split()
lst = [int(x) for x in lst]
print(double_the_difference(lst))