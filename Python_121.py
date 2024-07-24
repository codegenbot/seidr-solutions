```
def solution(lst):
    total_sum = 0
    for i in lst:
        if i % 2 != 0:
            total_sum += i
    return total_sum