
def double_the_difference(lst):
    sum_odd = 0
    for x in lst:
        if x % 2 != 0:
            sum_odd += x
    return 2 * sum_odd


def check(fn):
    lst = [2, 3, 4]
    odd_sum = 3
    assert fn(lst) == odd_sum


if __name__ == '__main__':
    check(double_the_difference)
