```
def solution(lst):
    total = 0
    for i in lst[1::2]:
        if i % 2 != 0:
            total += i
    return total