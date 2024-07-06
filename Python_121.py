```
def solution(lst):
    return sum(i for i in lst if lst.index(i) % 2 != 0)