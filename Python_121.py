def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    even_count = len([i for i in lst if i % 2 == 0])
    return f"Sum of odd numbers: {odd_sum}, Count of even numbers: {even_count}"