def solution(lst):
    total = 0
    for i in lst:
        if i % 2 != 0:
            total += i
    return total