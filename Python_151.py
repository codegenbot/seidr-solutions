
def double_the_difference(lst):
    total = 0
    for x in lst:
        if x % 2 != 0:
            total += x
    return total
