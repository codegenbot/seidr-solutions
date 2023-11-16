
def double_the_difference(lst):
    summ = 0.0
    for x in lst:
        if x % 2 != 0:
            summ += x
    return summ

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]
odd_sum = 25.0
check(double_the_difference)
