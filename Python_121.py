def solution(lst):
    return sum(x for x in lst if i % 2 != 0 and x % 2 == 1)