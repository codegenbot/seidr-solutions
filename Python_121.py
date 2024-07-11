```
def solution(lst):
    if len(lst) == 0:
        return 0
    elif len(lst) % 2 != 0:  
        return sum(i for i in lst if i % 2 != 0)
    else:  
        mid = len(lst) // 2
        return (sum(i for i in lst[:mid+1] if i % 2 != 0) + 
                sum(i for i in lst[mid:] if i % 2 != 0)) / 2