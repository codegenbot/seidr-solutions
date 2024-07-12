Here is the completed code:

def solution(lst):
    return sum(x for x in lst[1::2] if x % 2 != 0)