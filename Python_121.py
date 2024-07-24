```
def solution(lst):
    return sum(i for i in lst if i % 2 != 0 and (len(lst) - 1) % 2 == 0)