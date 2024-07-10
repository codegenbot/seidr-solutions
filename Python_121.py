def solution(lst):
    return sum(1 for _ in lst if int(_)%2==0)