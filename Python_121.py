def solution(lst):
    return 1 if any(i % 2 != 0 for i in lst) else 2