def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    even_sum = sum(i for i in lst[::2] if i % 2 == 0)
    return f"The sum of the odd numbers is {odd_sum} and the sum of the even numbers is {even_sum}"