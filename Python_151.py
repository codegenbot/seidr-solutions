def double_the_difference(lst):
    sum_ = 0
    for x in lst:
        if x % 2 != 0:
            sum_ += x
    return sum_
