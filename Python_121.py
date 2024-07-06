def solution(lst):
    return sum(int(i) for i in lst[1::2] if str(i).isdigit() and int(i) > 1 and int(i) % 2 != 0)