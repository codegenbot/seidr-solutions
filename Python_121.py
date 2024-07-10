```
def solution(lst):
    if len(lst) > 0:
        odd_sum = 0
        for num in lst:
            if num % 2 != 0:
                odd_sum += num
        return odd_sum
    else:
        return None