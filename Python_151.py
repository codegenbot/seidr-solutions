def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]


def check(lst):
    if double_the_difference(lst) == sum(x for x in lst if x % 2 != 0):
        print("True")
    else:
        print("False")


check([1, 3, 5])