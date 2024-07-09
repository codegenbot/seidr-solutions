def check(func, lst):
    return sum(func(x) for x in lst)

def double_the_difference(x):
    return 2 * (x - 1)

lst = [1, 2, 3, 4, 5]

result = check(double_the_difference, lst)

print(result)