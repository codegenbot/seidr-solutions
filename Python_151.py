import random

def double_the_difference(list):
    odd_sum = 0
    for x in list: #list
        if x % 2 != 0:
            odd_sum += x
    return 2 * odd_sum

def check(f):
    lst = [random.randint(0, 100) for i in range(10)]
    odd_sum = sum([x for x in lst if x % 2 != 0])
    assert f(lst) == odd_sum
