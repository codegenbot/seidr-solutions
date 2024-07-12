def solution(lst):
    return sum(i for i in lst[1:] if i % 2 != 0)