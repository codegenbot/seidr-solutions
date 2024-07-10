```
def solution(lst):
    odd_sum = sum(i for i in lst if i % 2 != 0)
    return odd_sum