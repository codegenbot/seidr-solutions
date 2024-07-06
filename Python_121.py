```
def solution(lst):
    total = sum(int(i) for i in lst[1::2] if int(i) > 1 and int(i) % 2 != 0)
    return lst[0] if total == 0 else total * int(lst[0])