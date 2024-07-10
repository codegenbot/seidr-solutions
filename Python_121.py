```
def solution(lst):
    return (
        sum(i for i in lst if len(lst) % 2 != 0 or i == lst[len(lst)//2])
    )