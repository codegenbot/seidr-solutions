def double_the_difference(lst):
    odd_nums = [num for num in lst if num % 2 != 0]
    return sum([i**2 for i in odd_nums]) * 2


def check(lst):
    result = double_the_difference(lst)
    print("The sum of squares of positive odd numbers in the list is: ", result)