````
def check(lst):
    if double_the_difference(lst) == sum(x for x in lst if x % 2 != 0):
        print("True")
    else:
        print("False")


def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]


def check(lst):
    if double_the_difference(lst) == sum(x for x in lst if x % 2 != 0):
        print("True")
    else:
        print("False")


def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]


"""Given an integer array, return True if the difference between each element and the smallest 
element in the array is doubled and summed to equal the sum of all odd elements in the array. 
Otherwise, return False."""
check([1, 3, 5])