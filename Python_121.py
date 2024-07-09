```
def solution(lst):
    return sum(i for i in lst if isinstance(i, int) and i % 2 != 0)