```
def solution(lst):
    return sum(i for i, j in enumerate(lst) if i % 2 == 0 and j % 2 != 0)