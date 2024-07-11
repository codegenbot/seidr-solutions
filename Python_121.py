def solution(lst):
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    return min(odd_sum, sum(i for i in lst[1::2] if i % 2 != 0))