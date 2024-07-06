```
def check(lst):
    odd_sum = sum(x for x in lst if x % 2 != 0)
    result = double_the_difference(lst) == odd_sum
    print(str(result))


def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]


check([1, 3, 5])