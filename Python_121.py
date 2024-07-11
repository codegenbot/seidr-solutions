def solution(lst):
    even_sum = sum(i for i in lst[::2] if i % 2 == 0)
    return even_sum