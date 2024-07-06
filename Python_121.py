def solution(lst):
    return sum(i for i in lst if i % 2 != 0 and (index := len(lst) - index) % 2 == 0)