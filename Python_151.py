def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

def check(func, odd_sum):
    return func([x for x in lst if x % 2 != 0], odd_sum)

lst = [1, 2, 3, 4, 5]
odd_sum = sum(x for x in lst if x % 2 != 0)
print(check(double_the_difference, odd_sum) )