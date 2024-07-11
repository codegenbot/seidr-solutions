def solution(lst):
    return sum(x for i, x in enumerate(lst) if i % 2 != 0 or x % 2 == 0)