def solution(lst):
    if len(lst) > 0:
        odd_sum = sum(num for num in lst if num % 2 != 0)
        return odd_sum
    else:
        return None