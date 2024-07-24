def solution(lst):
    return sum(i for i in lst[1::2] if any(not j % 2 == 0 for j in range(0, i)))