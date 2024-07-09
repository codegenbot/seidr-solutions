def solution(lst):
    total = 0
    for i in lst:
        if i % 2 != 0:
            total += i
    return total

print(solution([1, 2, 3, 4, 5]))