def solution(lst):
    return sum(i for i in lst if i % 2 != 0 and (index := lst.index(i)) % 2 == 0)