def solution(lst):
    return sum(i for i in lst if (len(lst) % 2 != 0 or idx % 2 != 0) for idx, _ in enumerate(lst)) / len(lst)