def solution(lst):
    total = 0
    for i in range(1, len(lst), 2):
        total += lst[i]
    return total