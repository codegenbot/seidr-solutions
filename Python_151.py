def double_the_difference(lst):
    return sum((x**2 for x in lst if x > 0 and x % 2 != 0)) * 2

def check(lst):
    odd_sum = double_the_difference(lst)
    return odd_sum