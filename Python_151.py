def check(odd_sum, lst):
    return double_the_difference(lst) == odd_sum

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]
check_result = check(double_the_difference(lst), lst)
print(check_result)