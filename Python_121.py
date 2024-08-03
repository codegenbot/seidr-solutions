def solution(lst):
    if any(i % 2 == 0 for i in lst):
        return sum(i for i in lst[1::2] if i % 2 != 0)
    else:
        return "The input list must contain at least one even number."