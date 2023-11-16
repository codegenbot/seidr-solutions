
def double_the_difference(lst):
    sum_odd = 0
    for x in lst:
        if x % 2 != 0:
            sum_odd += x
    return 2 * sum_odd
