```
def solution(lst):
    mid = len(lst) // 2
    return sum(i for i in lst[mid+1:] if i % 2 == 0)