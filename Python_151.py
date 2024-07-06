```
def check(lst):
    if double_the_difference(lst)[0] == sum(x for x in lst if x % 2 != 0):
        print("True")
    else:
        print("False")


def double_the_difference(lst):
    first_half_sum = sum(i for i in lst[:len(lst)//2])
    second_half_sum = sum(i for i in lst[len(lst)//2:])
    return [abs(first_half_sum - second_half_sum)]


check([1, 3, 5])