def solution(lst):
    if len(lst) == 0:
        return 0
    elif len(lst) % 2 != 0:
        return sum(i for i in lst if i % 2 != 0)
    else:
        half = len(lst) // 2
        result1 = sum(i for i in lst[: half + 1] if i % 2 != 0)
        result2 = sum(i for i in lst[half:] if i % 2 != 0)
        return max(result1, result2)


assert solution([3, 13, 2, 9]) == 15