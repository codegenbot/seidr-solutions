def solution(lst):
    if len(lst) > 0:
        even_sum = 0
        for num in lst:
            if num % 2 == 0:
                even_sum += num
        return even_sum
    else:
        return None