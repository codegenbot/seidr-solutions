def solution(lst):
    return sum([num for i, num in enumerate(lst) if i % 2 == 1 and num % 2 != 0])