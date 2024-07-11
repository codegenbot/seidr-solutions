```
def solution(lst):
    return sum(i for i in lst) if len(lst) % 2 != 0 else lst[0]