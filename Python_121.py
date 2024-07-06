```
def solution(lst):
    total = sum(int(i) for i in lst[1::2] if i > '1' and i % 2 != 0)
    return total