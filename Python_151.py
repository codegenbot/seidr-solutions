def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]

lst = input("Enter a list of numbers (space separated): ")
lst = [int(x) for x in lst.split()]
print(double_the_difference(lst))