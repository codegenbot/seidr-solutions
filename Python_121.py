```
def solution(lst):
    if len(lst) == 0:
        return 0
    elif len(lst) % 2 != 0:
        return sum(i for i in lst if i % 2 != 0)
    else:
        first_half_sum = sum(i for i in lst[:len(lst)//2] if i % 2 != 0)
        second_half_sum = sum(i for i in lst[len(lst)//2:] if i % 2 != 0)
        return abs(first_half_sum - second_half_sum)