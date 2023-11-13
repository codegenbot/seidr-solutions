import math

def double_the_difference(lst):
    res = 0
    for i in range(len(lst)):
        if (lst[i] % 2 == 0 and lst[i] > 0):
            res = res + lst[i] * lst[i]
        elif (lst[i] % 2 != 0 and lst[i] > 0):
            res = res + lst[i]
    return res
