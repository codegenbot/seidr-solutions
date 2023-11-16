import sys

def check(f):
    lst = [1, 2, 3, 4, 5]
    odd_sum = 9
    if f(lst) != odd_sum:
        print("Incorrect for input: {}".format(lst))
        sys.exit(1)
    lst = [2, 4, 6, 8, 10]
    odd_sum = 0
    if f(lst) != odd_sum:
        print("Incorrect for input: {}".format(lst))
        sys.exit(1)
    lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    odd_sum = 25
    if f(lst) != odd_sum:
        print("Incorrect for input: {}".format(lst))
        sys.exit(1)
    print("Correct!")

def double_the_difference(lst):
    sum = 0
    for x in lst:
        if x % 2 != 0:
            sum += x
    return sum

if __name__ == '__main__':
    check(double_the_difference)
