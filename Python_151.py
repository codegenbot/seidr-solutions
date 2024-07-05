def double_the_difference(lst):
    return sum(x ** 2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)

def check(double_the_difference):
    lst = [1, 2, 3, 4, 5]
    odd_sum = sum(x ** 2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)
    return double_the_difference(lst) == odd_sum

print(check(double_the_difference))