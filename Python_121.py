def solution(lst):
    result = sum(
        i
        for pair in ((i, idx) for idx, i in enumerate(lst))
        for i, idx in pair
        if i % 2 != 0 and idx % 2 == 0
    )
    return result