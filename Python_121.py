def solution(lst):
    if len(lst) == 0:
        return 0
    elif len(lst) % 2 != 0:
        odd_sum = sum(i for i in [lst[0]] + lst[1::2] if i % 2 != 0)
    else:
        odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    return odd_sum