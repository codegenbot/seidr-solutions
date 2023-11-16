
def double_the_difference(lst):
    odd_sum = 0
    for x in lst:
        if x % 2 != 0:
            odd_sum += x
    return odd_sum * 2


def check(function):
    lst = [1, 2, 3, 4]
    assert function(lst) == 12


if __name__ == '__main__':
    check(double_the_difference)
