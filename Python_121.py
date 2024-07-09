```
def solution(lst):
    total = sum(i for i in lst[1::2] if i % 2 != 0)
    return total if total else 0