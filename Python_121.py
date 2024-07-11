def solution(lst):
    if len(lst) == 0:
        return 0
    odd_sum = sum(i for i in lst[:1] + lst[1::2] if i % 2 != 0) if len(lst) % 2 != 0 else sum(i for i in lst[1::2] if i % 2 != 0)
    return odd_sum