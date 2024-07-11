def solution(lst):
    if len(lst) == 0:
        return 0
    elif len(lst) % 2 != 0:
        return sum(i for i in lst if i % 2 != 0)
    else:
        return sum(i for i in lst if i % 2 != 0) / len([i for i in lst if i % 2 != 0])