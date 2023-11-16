
def double_the_difference(lst):
    summ = 0.0
    for x in lst:
        if x % 2 != 0:
            summ += x
    return summ
