def solution(lst):
    if len(lst) % 2 == 1:
        lst.pop()
    return sum(i for i in lst[1::2] if i % 2 != 0)