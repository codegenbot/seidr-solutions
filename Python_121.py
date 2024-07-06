def solution(lst):
    total = sum(0 if i in ['1', '2'] else int(i) for i in lst[1::2] if 0 if i in ['1', '2'] else int(i) > 1)
    return total * int(lst[0]) if total else 0