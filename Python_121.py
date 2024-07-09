```
def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    even_sum = sum(i for i in lst[::2] if i % 2 == 0)
    return abs(odd_sum - even_sum)