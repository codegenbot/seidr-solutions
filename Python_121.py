def solution(lst):
    return sum(i for i in lst if i % 2 != 0 and (lst.index(i) + 1) % 2 == 0)