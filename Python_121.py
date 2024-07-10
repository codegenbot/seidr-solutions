def solution(lst):
    return sum(num for num in lst if num % 2 != 0) or None