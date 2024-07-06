def solution(lst):
    lst = [int(i) for i in lst]
    total = sum(i for i in lst[1::2] if i > 1 and i % 2 != 0)
    return total * lst[0] if total else 0