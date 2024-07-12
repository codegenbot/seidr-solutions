```
def double_the_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2


def check():
    lst = list(map(int, input("Enter a list of numbers separated by space: ").split()))
    return double_the_difference(lst)