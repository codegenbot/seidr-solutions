```
def solution(lst):
    total = sum(map(int, [i for i in lst[1::2] if i.isdigit()]))
    return total * int(lst[0]) if total else 0