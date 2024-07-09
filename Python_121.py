```
def solution(lst):
    return sum(filter(lambda x: x % 2 != 0, lst))