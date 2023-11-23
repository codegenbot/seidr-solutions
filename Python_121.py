def solution(lst):
    return sum(lst[i] for i in range(1, len(lst), 2) if lst[i-1] % 2 != 0)