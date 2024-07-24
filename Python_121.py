```
def solution(lst):
    return lst[0] + sum(i for i in lst[1::2] if i % 2 != 0)