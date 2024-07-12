def solution(lst):
    total = 0
    for i in range(0, len(lst), 2):
        if isinstance(lst[i], int) and lst[i] % 2 != 0:
            total += lst[i]
    return total