def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]

def check(odd_sum):
    lst = [1,3,5]
    if double_the_difference(lst) == odd_sum:
        print("True")
    else:
        print("False")

check(9)