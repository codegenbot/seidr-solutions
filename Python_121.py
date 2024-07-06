def solution(lst):
    even_sum = sum(i for i in lst if i % 2 == 0)
    odd_sum = sum(i for i in lst if i % 2 != 0)
    if both_sums:
        return odd_sum
    else:
        return even_sum