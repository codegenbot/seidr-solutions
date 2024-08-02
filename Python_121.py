def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    even_count = len([i for i in lst[::2] if i % 2 == 0])
    return str(odd_sum) + " " + str(even_count)