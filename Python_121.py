def solution(lst):
    return sum([i for i in lst[1::2] if i % 2 != 0])
assert solution([3, 13, 2, 9]) == 23