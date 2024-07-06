```
def solution(lst):
    total = sum(int(i) for i in lst if int(i) > 1 and int(i) % 2 != 0)
    return total