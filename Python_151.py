def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)


def check(odd_sum):
    lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    return double_the_difference(lst) == odd_sum


lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]
check(double_the_difference(lst))