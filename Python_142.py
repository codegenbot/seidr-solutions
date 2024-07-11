```
def sum_squares(lst):
    return [i ** 2 for i in lst]

def check(func):
    result = func([1, 2, 3])
    print(result)

check(sum_squares)