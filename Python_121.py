def solution(lst):
    return (
        sum(i for i in lst)
        if len(lst) % 2 != 0
        else sum(i for i in lst[1:]) if lst else 0
    )