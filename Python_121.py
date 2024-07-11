def solution(lst):
    return sum(i for i in lst if len(lst) % 2 != 0 or lst.index(i) % 2 != 0) / len(lst)