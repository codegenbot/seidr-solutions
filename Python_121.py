def solution(lst):
    if not isinstance(lst, list) or any(not isinstance(i, str) for i in lst):
        return 0
    total = sum(int(i) for i in lst[::] if i.isdigit() and int(i) > 1)
    return total * int(lst[0]) if total else 0