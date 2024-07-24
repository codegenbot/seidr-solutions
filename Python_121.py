def solution(lst):
    return sum(i for i in (x for x in lst[1::2] if x % 2 == 0 and x in lst))