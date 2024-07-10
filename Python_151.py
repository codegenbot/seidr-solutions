```
def double_the_difference(lst):
    return sum(i ** 2 for i in lst) - 2 * sum(lst)

def check(lst, func):
    result = func(lst)
    print(f"The difference between the sum of squares and twice the sum is {result}.")

check([1, 2, 3], double_the_difference)