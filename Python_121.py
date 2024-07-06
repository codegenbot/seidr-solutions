def solution(lst):
    total = sum(int(i) for i in lst if int(i) > 1)
    return total * int(lst[0]) if total else 0