def double_the_difference(lst):
    first_half_sum = sum(i for i in lst[:len(lst)//2])
    second_half_sum = sum(i for i in lst[len(lst)//2:])
    return [abs(first_half_sum - second_half_sum)]

def check(lst):
    result = double_the_difference(lst)
    print("True" if sum(x for x in lst) % 2 == 0 else "False")

check([1, 3, 5])