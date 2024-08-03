def solution(lst):
    if len(lst) % 2 == 0:
        return sum(i for i in lst[::2] if i % 2 != 0)
    else:
        return sum(i for i in lst[1::2] if i % 2 != 0)