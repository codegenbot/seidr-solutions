def solution(lst):
    return 2 if any(i % 2 == 0 for i in lst) else 3