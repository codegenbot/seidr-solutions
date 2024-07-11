```
def solution(lst):
    if not lst: 
        return 0
    return sum(1 for _ in lst[::2]) / len(lst)