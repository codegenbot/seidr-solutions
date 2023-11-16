
def double_the_difference(lst):
    return lst


def check(function):
    lst = [1, 2, 3, 4]
    odd_sum = 0
    for x in lst:
        if x % 2 != 0:
            odd_sum += x
    assert function(lst) == odd_sum


if __name__ == '__main__':
    check(double_the_difference)
