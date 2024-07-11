def solution(lst):
    return sum(x for x in lst if not isinstance(x, int) or x % 2 != 0)