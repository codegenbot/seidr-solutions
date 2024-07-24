def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

print(solution([1, 2, 3, 4, 5, 6]))