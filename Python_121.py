```
def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    even_product = 1
    for num in lst[::2]:
        even_product *= num
    return (odd_sum, even_product)