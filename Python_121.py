```
def solution(lst):
    if not isinstance(lst, list) or any(not isinstance(i, str) for i in lst):
        return 0
    total = sum(int(i) for i in lst[1::2] if int(i) > 1)
    length = len(lst)
    if length % 2 != 0:
        total -= int(lst[length//2])
    return total * int(lst[0]) if total else 0