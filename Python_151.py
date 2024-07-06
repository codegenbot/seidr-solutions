```
def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]


while True:
    lst = input("Enter a list of numbers separated by spaces: ").split()
    if all(x.isdigit() for x in lst):  
        lst = [int(x) for x in lst]
        while "" in lst:
            lst.remove("")
        break
print(double_the_difference(lst))