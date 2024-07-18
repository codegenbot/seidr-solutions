def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

odd_sum = sum(x for x in lst if x % 2 != 0)

def check(func, odd_sum):
    return func(lst)

print(check(double_the_difference, odd_sum) )