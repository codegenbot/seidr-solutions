def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    even_count = len([i for i in lst if i % 2 == 0])
    return f"The sum of odd numbers is {odd_sum} and the number of even numbers is {even_count}"