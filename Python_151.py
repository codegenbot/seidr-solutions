def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2


def check():
    lst1 = [1, 3, -1, 5, 6]
    odd_sum = 25
    lst2 = [1, 2, 3, 4, 5]
    if double_the_difference(lst1) == odd_sum:
        print("True")
    else:
        print("False")

    if double_the_difference([1, 3, -1, 3]) == 32:
        print("True")
    else:
        print("False")


check()