```
def check(lst):
    result = double_the_difference(lst)
    if sum(i for i in lst) % 2 == 0:
        print("True")
    else:
        print(result[0] == 1)


def double_the_difference(lst):
    first_half_sum = sum(i for i in lst[:len(lst)//2])
    second_half_sum = sum(i for i in lst[len(lst)//2:])
    return [abs(first_half_sum - second_half_sum)]


check([1, 3, 5])