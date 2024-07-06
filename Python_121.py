```
def solution(lst):
    even_sum = sum(int(i) for i in lst[1::2] if int(i) > 1 and int(i) % 2 != 0)
    odd_mult = even_sum * int(lst[0]) if even_sum else 0
    return odd_mult