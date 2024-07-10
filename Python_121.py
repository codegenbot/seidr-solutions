```
def solution(lst):
    if len(lst) > 0:
        odd_sum = sum(i for i in lst if i % 2 != 0)
        return odd_sum
    else:
        return None