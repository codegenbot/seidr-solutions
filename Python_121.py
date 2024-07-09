def solution(lst):
    result = 0
    for i in lst:
        if i % 2 != 0:
            result += i
    return result