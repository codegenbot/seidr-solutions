```
def sum_squares(lst):
    return sum([x ** 2 for x in lst])

def check(func):
    result = func([1, 2, 3])
    print(result)

check(sum_squares)