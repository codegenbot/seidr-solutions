```
def solution(lst):
    if len(lst) < 2:
        return 0
    return sum(i for i in lst[1::2] if i % 2 != 0)