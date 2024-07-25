def solution(lst):
    return sum(lst[i] for i in range(1, len(lst), 2) if i % 2 == 0 and lst[i] % 2 != 0)