def check(lst):
    difference_result = double_the_difference(lst)
    if sum(x for x in lst) % 2 == 0:
        print("True")
    else:
        print("False")


def double_the_difference(lst):
    first_half_sum = sum(i for i in lst[:len(lst)//2])
    second_half_sum = sum(i for i in lst[len(lst)//2:])
    return [abs(first_half_sum - second_half_sum)]


check([1, 3, 5])