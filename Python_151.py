
def double_the_difference(lst):
    sum = 0
    for x in lst:
        if x % 2 != 0:
            sum += x
    return sum

lst = [1, 2, 3, 4, 5]
odd_sum = 9
check(double_the_difference)
