```
def double_the_difference(lst):
    return sum(x**2 for x in lst) - 2 * sum(lst)

def check(lst, func):
    result = func(lst)
    print(f"The difference between the sum of squares and twice the sum is {result}.")