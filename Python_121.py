def solution(lst):
    if not any(i % 2 == 0 for i in lst):
        raise ValueError("Input list should contain at least one even number")
    return sum(i for i in lst[1::2] if i % 2 != 0)