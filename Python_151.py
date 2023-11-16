import random


def double_the_difference(lst):
    sum = 0.0
    for x in lst:
        if x % 2 != 0:
            sum += x
    return sum


def check(fn):
    lst = [random.randint(0, 100) for _ in range(10)]
    odd_sum = sum([x for x in lst if x % 2 != 0])
    assert fn(lst) == odd_sum


check(double_the_difference)
