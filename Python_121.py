def solution(lst):
    result = sum(i for i in range(len(lst)) if lst[i] % 2 != 0 and (i + 1) % 2 == 0)
    return result