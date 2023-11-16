
def double_the_difference(lst):
    odd_sum = 0
    for x in lst:
        if x % 2 != 0:
            odd_sum += x
    return 2 * odd_sum
