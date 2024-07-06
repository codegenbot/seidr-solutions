```
def solution(lst):
    return sum(int(i) for i in lst[1::2] if int(i) % 2 != 0 and int(i) > 1)