def solution(lst):
    return sum(lst[i] for i in range(len(lst)) if i % 2 == 1 and lst[i] % 2 != 0)