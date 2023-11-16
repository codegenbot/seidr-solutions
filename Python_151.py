
def double_the_difference(lst):
    sum = 0.0
    for x in lst:
        if x % 2 != 0:
            sum += x
    return sum
