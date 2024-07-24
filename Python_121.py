def solution(lst):
    return sum(i for i in lst[len(lst)//2:][::-1] if i % 2 == 0)