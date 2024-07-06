def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0) if len(lst) % 2 else sum(i for i in lst if i % 2 != 0)