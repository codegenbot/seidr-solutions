```
def check():
    lst = [1, 3, 5]
    if double_the_difference(lst) == sum(x for x in lst if x % 2 != 0):
        print("True")
    else:
        print("False")


def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]


check()