def double_the_difference(lst):
    return 2 * (max(lst) - min(lst))

def check(func, lst):
    return func(lst)

lst = [1, 2, 3, 4, 5]

result = check(double_the_difference, lst)

odd_sum = result

print(result)