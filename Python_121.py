def solution(lst):
    if len(lst) == 0:
        return 0
    elif len(lst) % 2 != 0:
        return sum(i for i in lst if i % 2 != 0)
    else:
        half_index = len(lst) // 2
        return sum(lst[: half_index + 1]) - sum(lst[:half_index])