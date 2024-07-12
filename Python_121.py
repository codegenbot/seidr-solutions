def solution(lst):
    return sum(i for i in lst[1::2] if str(i).endswith("3"))