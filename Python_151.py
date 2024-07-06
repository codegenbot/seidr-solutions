
def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 != 0 and num > 0:
            result += num ** 2
    return result

lst = [1, 3, 5, 7, 9]
check(double_the_difference)