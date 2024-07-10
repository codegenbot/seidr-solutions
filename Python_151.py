def double_the_difference(lst):
    sum_of_squares = sum(i ** 2 for i in lst)
    twice_sum = 2 * sum(lst)
    return sum_of_squares - twice_sum

def check(lst1, func, lst2=None):
    result = func(lst1)
    print(f"The difference between the sum of squares and twice the sum is {result}.")

check([1, 2, 3], double_the_difference)