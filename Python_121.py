def solution(lst):
    return sum([x for x in lst if isinstance(x, int) and x % 2 != 0])