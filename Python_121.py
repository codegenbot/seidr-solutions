```
def solution(lst):
    return sum(int(d) for i in lst for d in str(i) if int(d) % 2 != 0)