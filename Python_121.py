def solution(lst):
    if isinstance(lst, list) and all(isinstance(i, int) for i in lst):
        return sum(i for i in lst[1::2] if i % 2 != 0)
    else:
        return "Invalid input"