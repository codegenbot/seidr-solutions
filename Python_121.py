def solution(lst):
    if len(lst) == 0:
        return 0
    elif len(lst) % 2 != 0:
        return sum(i for i in lst if i % 2 != 0)
    else:
        if len(lst) > 1 and lst[len(lst)//2] % 2 != 0:
            return sum(i for i in lst if i % 2 != 0)
        else:
            return 0