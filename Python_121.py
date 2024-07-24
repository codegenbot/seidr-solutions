def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    even_count = len([i for i in lst[::2] if i % 2 == 0])
    return f"The sum of the odd numbers is {odd_sum} and there are {even_count} even numbers."