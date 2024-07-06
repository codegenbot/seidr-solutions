```"""
def solution(lst):
    odd_sum = sum(i for i in lst if i % 2 != 0)
    return f"Odd numbers: {odd_sum}"
""``