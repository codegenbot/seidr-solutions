```
def check(lst):
    if sum(x for x in lst) - min(lst) * len(lst) == sum(x for x in lst if x % 2 != 0):
        print("True")
    else:
        print("False")


check([1, 3, 5])