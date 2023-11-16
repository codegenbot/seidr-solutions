
def double_the_difference(list):
    odd_sum = 0
    for x in list:
        if x % 2 != 0:
            odd_sum += x
    return 2 * odd_sum
