
def double_the_difference(list):
    sum = 0
    for x in list:
        if x % 2 != 0:
            sum = sum + x
    return sum
