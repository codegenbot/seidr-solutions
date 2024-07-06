```
def double_the_difference(lst):
    first_half_sum = sum(i for i in lst[:len(lst)//2])
    second_half_sum = sum(i for i in lst[len(lst)//2:])
    return [abs(sum(lst[:len(lst)//2]) - 2*sum(lst[len(lst)//2:]))]