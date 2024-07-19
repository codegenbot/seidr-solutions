def solution(lst):
    return sum(i for i in lst[1::2] if 1 < (lst.index(i) + 1) % len(lst) <= len(lst) // 2)